﻿#ifdef LSN_USE_WINDOWS
#include "LSNLSpiroNes.h"
#include "Input/LSNDirectInput8.h"
#include "Windows/Layout/LSNLayoutManager.h"
#include "Windows/MainWindow/LSNMainWindow.h"
#include "Windows/MainWindow/LSNMainWindowLayout.h"
#endif	// #ifdef LSN_USE_WINDOWS


int main() {
	return 0;
}

#ifdef LSN_USE_WINDOWS
#if !defined( LSN_CPU_VERIFY )
int WINAPI wWinMain( _In_ HINSTANCE _hInstance, _In_opt_ HINSTANCE /*_hPrevInstance*/, _In_ LPWSTR /*_lpCmdLine*/, _In_ int /*_nCmdShow*/ ) {
	lsw::CBase::Initialize( _hInstance, new lsn::CLayoutManager(),
		L"LSNDOCK",
		L"LSNSPLITTER",
		L"LSNMULTISPLITTER",
		L"LSNTREEVIEW",
		L"LSNTREELISTVIEW",
		L"LSNCHILDWINDOW" );
	lsn::CDatabase::Init();
	lsn::CDirectInput8::CreateDirectInput8();

	std::atomic_bool abIsAlive = false;
	lsn::CMainWindow * pwMainWindow = static_cast<lsn::CMainWindow *>(lsn::CMainWindowLayout::CreateMainWindow( &abIsAlive ));

	// Controls seconds_since_start(), milliseconds_since_start(), etc., Expression Evaluator.
	// We move it up as close to the start of the loop as possible so that these values most closely mark the actual time that meaningful execution
	//	takes place (clock() returns the time since the EXE actually started (before main() is even called), so we don't need more tickers from that
	//	time.
	// In a way, this allows (clock() - milliseconds_since_start()) to print the time it takes to initialize.
	ee::CExpEval::InitializeExpressionEvaluatorLibrary();
	MSG mMsg = {};
	::PeekMessageW( &mMsg, NULL, 0U, 0U, PM_NOREMOVE );

	while ( mMsg.message != WM_QUIT ) {
		// Use ::PeekMessage() so we can use idle time to render the scene.
		while ( (::PeekMessageW( &mMsg, NULL, 0U, 0U, PM_REMOVE ) != 0) ) {
			// Translate and dispatch the message.
			if ( ::TranslateAcceleratorW( pwMainWindow->Wnd(), NULL, &mMsg ) == 0 ) {
				::TranslateMessage( &mMsg );
				::DispatchMessageW( &mMsg );
			}
		}
		if ( !abIsAlive ) { break; }
		if ( mMsg.message != WM_QUIT ) {
			pwMainWindow->Tick();
		}
	}


	lsw::CBase::ShutDown();
	lsn::CDatabase::Reset();
	lsn::CDirectInput8::Release();
	return static_cast<int>(mMsg.wParam);
}
#else	// #if !defined( LSN_CPU_VERIFY )
int WINAPI wWinMain( _In_ HINSTANCE _hInstance, _In_opt_ HINSTANCE /*_hPrevInstance*/, _In_ LPWSTR /*_lpCmdLine*/, _In_ int /*_nCmdShow*/ ) {
	std::unique_ptr<lsn::CCpuBus> pbBus = std::make_unique<lsn::CCpuBus>();
	pbBus->ApplyMap();
	std::unique_ptr<lsn::CCpu6502> pcCpu = std::make_unique<lsn::CCpu6502>( pbBus.get() );
	return 0;
}
#endif	// #if !defined( LSN_CPU_VERIFY )
#else
int wmain( int /*_iArgC*/, wchar_t * /*_pwcArgv*/[] ) {
#define LSN_PATH				u"J:\\My Projects\\L. Spiro NES\\Tests\\nestest.nes"
	std::unique_ptr<lsn::CNtscSystem> pnsSystem = std::make_unique<lsn::CNtscSystem>();
	std::vector<uint8_t> vExtracted;
	std::u16string s16Path;
	{
		lsn::CZipFile fbFile;
		fbFile.Open( LSN_PATH );
		/*std::vector<uint8_t> vData;
		fbFile.LoadToMemory( vData );*/
		std::vector<std::u16string> vFiles;
		fbFile.GatherArchiveFiles( vFiles );
		if ( vFiles.size() ) {
			for ( auto I = vFiles.size(); I--; ) {
				std::u16string s16Ext = lsn::CUtilities::GetFileExtension( vFiles[I] );
				if ( ::_wcsicmp( reinterpret_cast<const wchar_t *>(s16Ext.c_str()), L"NES" ) == 0 ) {
					s16Path = lsn::CUtilities::GetFileName( vFiles[I] );
					fbFile.ExtractToMemory( vFiles[I], vExtracted );
					break;
				}
			}
		}
		else {
			s16Path = LSN_PATH;
			fbFile.LoadToMemory( vExtracted );
		}
	}
#undef LSN_PATH

	lsn::CClock cClock;
	pnsSystem->LoadRom( vExtracted, s16Path );
	pnsSystem->ResetState( false );
	uint64_t ui64TickCount = 0;
#define LSN_TIME								(1ULL * 10)
	while ( pnsSystem->GetAccumulatedRealTime() / pnsSystem->GetClockResolution() < LSN_TIME ) {
		pnsSystem->Tick();
		++ui64TickCount;
	}
	uint64_t ui64Time = cClock.GetRealTick() - cClock.GetStartTick();
	// If there are more Tick()'s than cycles then we definitely didn't go slower than the real system, so we can shave off excess time.

	double dTime = (ui64TickCount >= pnsSystem->GetMasterCounter()) ?
		double( LSN_TIME ) :
		ui64Time / double( cClock.GetResolution() );
	char szBuffer[256];
	::sprintf_s( szBuffer, "Ticks: %llu. Time: %.8f.\r\n"
		"Master Cycles: %llu (%.8f per second; expected %.8f).\r\n"
		"%.8f cycles per Tick().\r\n"
		"%.8f FPS.\r\n",
		ui64TickCount, dTime,
		pnsSystem->GetMasterCounter(), pnsSystem->GetMasterCounter() / dTime, double( pnsSystem->MasterHz() ) / pnsSystem->MasterDiv(),
		pnsSystem->GetMasterCounter() / double( ui64TickCount ),
		pnsSystem->GetPpu().GetFrameCount() / dTime
		);
	::OutputDebugStringA( szBuffer );
	return 0;
}
#endif	// #ifdef LSN_USE_WINDOWS
