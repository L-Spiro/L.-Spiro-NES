﻿/**
 * Copyright L. Spiro 2022
 *
 * Written by: Shawn (L. Spiro) Wilcoxen
 *
 * Description: Localization macros for en-us (English (United States)).
 */


#pragma once

#define LSN_NES																Nintendo Entertainment System\u00AE						// Nintendo Entertainment System(R)
#define LSN_FAMICOM															Famicom\u00AE											// Famicom(R)
#define LSN_SNES															Super Nintendo Entertainment System\u00AE				// Super Nintendo Entertainment System(R)

#define LSN_OPTIONS_TXT														Options
#define LSN_ALL_SUPPORTED_FILES___NES____ZIP____NES___ZIP_					All Supported Files (*.nes, *.zip)\0*.nes;*.zip\0
#define LSN_NES_FILES____NES____NES_										NES Files (*.nes)\0*.nes\0
#define LSN_ZIP_FILES____ZIP____ZIP_										ZIP Files (*.zip)\0*.zip\0
#define LSN_ALL_FILES___________											All Files (*.*)\0*.*\0
#define LSN__FILE															&File
#define LSN__OPTIONS														&Options
#define LSN__TOOLS															&Tools
#define LSN__WINDOW															&Window
#define LSN__HELP															&Help
// File menu.
#define LSN_OPEN__ROM														Open R&OM
#define LSN_OPEN_REC_ENT													Open Re&cent
// Options menu.
#define LSN_VIDEO_SIZE														Video Si&ze
#define LSN_VIDEO_FILTER													Video &Filter
#define LSN_REGION															&Region
#define LSN_INPUT															&Input
#define LSN_VIDEO															&Video
#define LSN_AUDIO															&Audio
// Video sizes.
#define LSN_VIDEO_SIZE_1X													1×
#define LSN_VIDEO_SIZE_2X													2×
#define LSN_VIDEO_SIZE_3X													3×
#define LSN_VIDEO_SIZE_4X													4×
#define LSN_VIDEO_SIZE_5X													5×
#define LSN_VIDEO_SIZE_6X													6×
// Video filters.
#define LSN_VIDEO_FILTER_NONE												N&one
#define LSN_VIDEO_FILTER_NTSC_BLARGG										NTSC (&Blargg)
//#define LSN_VIDEO_FILTER_PAL_BLARGG											&PAL (Blargg)
#define LSN_VIDEO_FILTER_NTSC_L_SPIRO										NTSC (L. &Spiro)
#define LSN_VIDEO_FILTER_PAL_L_SPIRO										PAL (L&. Spiro)
#define LSN_VIDEO_FILTER_DENDY_L_SPIRO										&Dendy (L. Spiro)
#define LSN_VIDEO_FILTER_PALM_L_SPIRO										PAL-&M (Brazil Famiclone) (L. Spiro)
#define LSN_VIDEO_FILTER_PALN_L_SPIRO										PAL-&N (Argentina Famiclone) (L. Spiro)
//#define LSN_VIDEO_FILTER_AUTO_BLARGG										&NTSC/PAL Auto (Blargg)
#define LSN_VIDEO_FILTER_NTSC_CRT											NTSC-CRT (&LMP88959)
#define LSN_VIDEO_FILTER_NTSC_CRT_FULL										NTSC-&CRT Full (LMP88959)
#define LSN_VIDEO_FILTER_PAL_CRT_FULL										PAL-CRT &Full (LMP88959)
//#define LSN_VIDEO_FILTER_AUTO_CRT											NTSC-CRT/PAL &Auto (LMP88959/Blargg)
#define LSN_VIDEO_FILTER_AUTO_CRT_FULL										NTSC/PAL-CRT &Auto (LMP88959)
#define LSN_VIDEO_FILTER_AUTO_LSPIRO										NTSC/PAL Auto (L. S&piro)
// Regions.
#define LSN_REGION_AUTO														&Automatic
#define LSN_REGION_NTSC														&NTSC
#define LSN_REGION_PAL														&PAL
#define LSN_REGION_DENDY													&Dendy
#define LSN_REGION_PALM														PAL-&M
#define LSN_REGION_PALN														PA&L-N

// Tools menu.
#define LSN_TOOLS_PATCH														&Patcher

// Main menu.
#define LSN_SELECT_ROM														Select ROM
#define LSN_FILE_LISTING													File Listing
#define LSN_SEARCH_															Search:
#define LSN_OK																OK
#define LSN_CANCEL															Cancel

// Input dialog.
#define LSN_INPUT_GLOBAL_SETTINGS											Global Settings
#define LSN_INPUT_PER_GAME_SETTINGS											Per-Game Settings
#define LSN_INPUT_DIALOG													Configure Input
#define LSN_INPUT_GENERAL													General
#define LSN_INPUT_CONSOLE_TYPE_												Console Type:
#define LSN_INPUT_USE_GLOBAL												Use Global
#define LSN_INPUT_SETTINGS													Settings
#define LSN_INPUT_PLAYER_1_													Player 1:
#define LSN_INPUT_PLAYER_2_													Player 2:
#define LSN_INPUT_PLAYER_3_													Player 3:
#define LSN_INPUT_PLAYER_4_													Player 4:
#define LSN_INPUT_CONFIGURATION												Configuration
#define LSN_INPUT_CONFIGURE													Configure
#define LSN_INPUT_EXPANSION_PORT											Expansion Port:
#define LSN_INPUT_USE_4_SCORE												Use Four Score\u2122									// Use Four Score(TM)
#define LSN_INPUT_NONE														None
#define LSN_INPUT_STANDARD_CONTROLLER										Standard Controller
#define LSN_INPUT_SNES_MOUSE												LSN_SNES Mouse
#define LSN_INPUT_SUBOR_MOUSE												Subor\u00AE Mouse										// Subor(R) Mouse
#define LSN_INPUT_ARKANOID_CONTROLLER										Arkanoid Controller
#define LSN_INPUT_BANDAI_HYPER_SHOT											Bandai\u00AE Hyper Shot									// Bandai(R) Hyper Shot
#define LSN_INPUT_BARCODE_BATTLER											Barcode Battler
#define LSN_INPUT_BATTLE_BOX												Battle Box
#define LSN_INPUT_EXCITING_BOXING_PUNCHING_BAG								Exciting Boxing Punching Bag
#define LSN_INPUT_FAMILY_BASIC_KEYBOARD										Family Basic Keyboard
#define LSN_INPUT_FAMILY_TRAINER											Family Trainer
#define LSN_INPUT_4_PLAYER_ADAPTOR											4-Player Adaptor
#define LSN_INPUT_HORI_TRACK												Hori Track
#define LSN_INPUT_JISSEN_MAHJONG_CONTROLLER									Jissen Mahjong Controller
#define LSN_INPUT_KONAMI_HYPER_SHOT											Konami\u00AE Hyper Shot									// Konami(R) Hyper Shot
#define LSN_INPUT_OEKA_KIDS_TABLET											Oeka Kids Tablet
#define LSN_INPUT_PACHINKO_CONTROLLER										Pachinko Controller
#define LSN_INPUT_PARTYTAP													Partytap
#define LSN_INPUT_SUBOR_KEYBOARD											Subor\u00AE Keyboard									// Subor(R) Keyboard
#define LSN_INPUT_TURBO_FILE												Turbo File
#define LSN_INPUT_ZAPPER													Zapper

// Standard input configuration.
#define LSN_STD_INPUT_BUTTONS												Buttons
#define LSN_STD_INPUT_ALTTERNATIVE_BUTTONS_1								Alternative Buttons 1
#define LSN_STD_INPUT_ALTTERNATIVE_BUTTONS_2								Alternative Buttons 2
#define LSN_STD_INPUT_ALTTERNATIVE_BUTTONS_3								Alternative Buttons 3
#define LSN_STD_INPUT_RAPID													Rapid
#define LSN_DIRECTIONAL_PAD													Directional Pad
#define LSN_SELECT_START													Select/Start
#define LSN_BUTTONS															Buttons
#define LSN_BUTTON_															Button:
#define LSN_TURBO_															Turbo:
#define LSN_DEAD_															Dead:

#define LSN_INPUT_DEVICES													Input Devices
#define LSN_DEVICE_NAME														Device Name
#define LSN_DEVICE_TYPE_													Device Type
#define LSN_STATUS															Status

#define LSN_LISTENING_														Listening\u2026											// Listening...

// Audio Options.
#define LSN_AUDIO_OPTIONS_													Audio Options
#define LSN_AUDIO_OPTIONS_GLOBAL_SETTINGS									Global Settings
#define LSN_AUDIO_OPTIONS_PERGAME_SETTINGS									Per-Game Settings
#define LSN_AUDIO_OPTIONS_STREAM_TO_FILE									Stream to File
#define LSN_AUDIO_OPTIONS_GENERAL											Output Settings
#define LSN_AUDIO_OPTIONS_USE_GLOBAL										Use Global
#define LSN_AUDIO_OPTIONS_DEVICE											Device:
#define LSN_AUDIO_OPTIONS_ENABLED											Enabled
#define LSN_AUDIO_OPTIONS_FORMAT											Format:
#define LSN_AUDIO_OPTIONS_DITHER											Dither
#define LSN_AUDIO_OPTIONS_VOLUME											Volume:
#define LSN_AUDIO_OPTIONS_BG_VOL											BG Vol:

#define LSN_AUDIO_OPTIONS_AUDIO_CHARACTERISTICS								Audio Characteristics
#define LSN_AUDIO_OPTIONS_PRESET											Preset:
#define LSN_AUDIO_OPTIONS_TWIN_FAMI_475711									Japanese Twin Famicom 475711, NESRGB, Stock RCA
#define LSN_AUDIO_OPTIONS_TWIN_FAMI_475711_DESC								Japanese Twin Famicom with NESRGB mod, stock RCA audio output.
#define LSN_AUDIO_OPTIONS_CUSTOM											Custom
#define LSN_AUDIO_OPTIONS_LPF_HZ											LPF Hz:
#define LSN_AUDIO_OPTIONS_HPF_1_HZ											HPF 1 Hz:
#define LSN_AUDIO_OPTIONS_HPF_2_HZ											HPF 2 Hz:
#define LSN_AUDIO_OPTIONS_HPF_3_HZ											HPF 3 Hz:
#define LSN_AUDIO_OPTIONS_INVERT											Invert
#define LSN_AUDIO_OPTIONS_NOISE_MAINS_HUM									Noise/Mains Hum

#define LSN_AUDIO_OPTIONS_INTERNAL											Internal
#define LSN_AUDIO_OPTIONS_BUFFER_SIZE										Buffer Size:
#define LSN_AUDIO_OPTIONS_BUFFERS											Buffers:
#define LSN_AUDIO_OPTIONS_BUFFER_DELAY										Buffer Delay:
#define LSN_AUDIO_OPTIONS_ANTI_ALIASING_QUALITY								Anti-Aliasing Quality:

#define LSN_AUDIO_OPTIONS_RAW												Raw Audio Signal
#define LSN_AUDIO_OPTIONS_CAPTURE_OUTPUT									Capture Output
#define LSN_AUDIO_OPTIONS_PATH_												Path:
#define LSN_AUDIO_OPTIONS_BROWSE											Browse
#define LSN_AUDIO_OPTIONS_HZ_												Hz:
#define LSN_AUDIO_OPTIONS_BITS_												Bits:
#define LSN_AUDIO_OPTIONS_PCM												PCM
#define LSN_AUDIO_OPTIONS_F32												32-Bit Float
#define LSN_AUDIO_OPTIONS_ADPCM												ADPCM
#define LSN_AUDIO_OPTIONS_DECIDED_BY_SETTINGS								Decided via Settings
#define LSN_AUDIO_OPTIONS_RAW_DESC											The raw unfiltered {}-Hz audio signal will be captured to a WAV file set to {} Hz.
#define LSN_AUDIO_OPTIONS_OUT_DESC											Audio will be captuerd after filters, anti-aliasing, and down-sampling have been applied, but while still in 32-bit float format.
#define LSN_AUDIO_OPTIONS_START_CONDITION_									Start Condition:
#define LSN_AUDIO_OPTIONS_END_CONDITION_									End Condition:
#define LSN_AUDIO_OPTIONS_START_SAMPLE										Start at Sample\u2026									// Start at Sample...
#define LSN_AUDIO_OPTIONS_END_SAMPLE										End at Sample\u2026										// End at Sample...
#define LSN_AUDIO_OPTIONS_NONE												None
#define LSN_AUDIO_OPTIONS_NON_SILENT										First Non-Zero
#define LSN_AUDIO_OPTIONS_DURATION											Duration (Seconds)
#define LSN_AUDIO_OPTIONS_SILENCE_FOR										Silence for (Seconds)
#define LSN_AUDIO_OPTIONS_WAV_TYPES											WAV Files (*.wav)\0*.wav\0\0
#define LSN_AUDIO_OPTIONS_ERR_INVALID_PATH									A valid path must be supplied.
#define LSN_AUDIO_OPTIONS_ERR_INVALID_START_COND							The selected starting condition requires a valid numeric input.  This can be in the form of raw numbers (\u201C2\u201D, \u201C56.2\u201D, \u201C360.0f\u201D, etc.) or as equations (\u201C2*60+13.5\u201D, \u201Cpow( 10, 6 / 20.0 )\u201D, etc.)
#define LSN_AUDIO_OPTIONS_ERR_INVALID_END_COND								The selected stopping condition requires a valid numeric input.  This can be in the form of raw numbers (\u201C10\u201D, \u201C5.5\u201D, \u201C0.5f\u201D, etc.) or as equations (\u201C3*60+10.5\u201D, \u201Clog10( 0.5 ) * 20\u201D, etc.)
#define LSN_AUDIO_OPTIONS_ERR_INVALID_DURATION								Durations must be positive values larger than 0.
#define LSN_AUDIO_OPTIONS_ERR_INVALID_STOP_SAMPLE							The stop sample must be greater than the start sample.

// Patcher.
#define LSN_PATCH_PATCH_ROM													Patch a ROM
#define LSN_PATCH_FILE														File
#define LSN_PATCH_ROM_TO_PATCH												ROM to Patch:
#define LSN_PATCH_PATCH_FILE												Patch File(s):
#define LSN_PATCH_OUTPUT_FILE												Output File:
#define LSN_PATCH_BROWSE													Browse
#define LSN_PATCH_FILE_TYPES												Patch Files (*.ips, *.bps, *.zip)\0*.ips;*.bps;*.zip\0All Files (*.*)\0*.*\0\0
#define LSN_PATCH_SRC_INFO													Source ROM Information
#define LSN_PATCH_PATCH														Patch
#define LSN_PATCH_DETAILS													Details
#define LSN_PATCH_EXPAND_SELECTED											Expand Selec&ted
#define LSN_PATCH_EXPAND_ALL												E&xpand All
#define LSN_PATCH_COLLAPSE_SELECTED											C&ollapse Selected
#define LSN_PATCH_COLLAPSE_ALL												&Collapse All

// OpenAL.
#define LSN_OPENAL_AL_NO_ERROR_DESC											There is not currently an error.
#define LSN_OPENAL_AL_INVALID_NAME_DESC										A bad name (ID) was passed to an OpenAL function.
#define LSN_OPENAL_AL_INVALID_ENUM_DESC										An invalid enum value was passed to an OpenAL function.
#define LSN_OPENAL_AL_INVALID_VALUE_DESC									An invalid value was passed to an OpenAL function.
#define LSN_OPENAL_AL_INVALID_OPERATION_DESC								The requested operation is not valid.
#define LSN_OPENAL_AL_OUT_OF_MEMORY_DESC									The requested operation resulted in OpenAL running out of memory.

#define LSN_OPENAL_ALC_NO_ERROR_DESC										There is not currently an error.
#define LSN_OPENAL_ALC_INVALID_DEVICE_DESC									A bad device was passed to an OpenAL function.
#define LSN_OPENAL_ALC_INVALID_CONTEXT_DESC									A bad context was passed to an OpenAL function.
#define LSN_OPENAL_ALC_INVALID_ENUM_DESC									An unknown enum value was passed to an OpenAL function.
#define LSN_OPENAL_ALC_INVALID_VALUE_DESC									An invalid value was passed to an OpenAL function.
#define LSN_OPENAL_ALC_OUT_OF_MEMORY_DESC									The requested operation resulted in OpenAL running out of memory.

#define LSN_OPENAL_ERROR_UNKNOWN											Unknown OpenAL error.

// Buttons.
#define LSN_BUTTON_LEFT														Left
#define LSN_BUTTON_RIGHT													Right
#define LSN_BUTTON_UP														Up
#define LSN_BUTTON_DOWN														Down
#define LSN_BUTTON_SELECT													Select
#define LSN_BUTTON_START													Start
#define LSN_BUTTON_B														B
#define LSN_BUTTON_A														A

// Audio Formats.
#define LSN_AUDIO_FORMAT_MONO8												Mono, 8-bit PCM
#define LSN_AUDIO_FORMAT_MONO16												Mono, 16-bit PCM
#define LSN_AUDIO_FORMAT_MONO24												Mono, 24-bit PCM
#define LSN_AUDIO_FORMAT_MONO32F											Mono, 32-bit Float

// Core Audio.
#define LSN_AUDIO_HARDWARE_NO_ERROR											The function call completed successfully.
#define LSN_AUDIO_HARDWARE_NOT_RUNNING_ERROR								The function call requires that the hardware be running but it isn\u2019t.
#define LSN_AUDIO_HARDWARE_UNSPECIFIED_ERROR								The function call failed while doing something that doesn\u2019t provide any error messages.
#define LSN_AUDIO_HARDWARE_UNKNOWN_PROPERTY_ERROR							The AudioObject doesn\u2019t know about the property at the given address.
#define LSN_AUDIO_HARDWARE_BAD_PROPERTY_SIZE_ERROR							An improperly sized buffer was provided when accessing the data of a property.
#define LSN_AUDIO_HARDWARE_ILLEGAL_OPERATION_ERROR							The requested operation couldn\u2019t be completed.
#define LSN_AUDIO_HARDWARE_BAD_OBJECT_ERROR									The AudioObjectID passed to the function doesn\u2019t map to a valid AudioObject.
#define LSN_AUDIO_HARDWARE_BAD_DEVICE_ERROR									The AudioObjectID passed to the function doesn\u2019t map to a valid AudioDevice.
#define LSN_AUDIO_HARDWARE_BAD_STREAM_ERROR									The AudioObjectID passed to the function doesn\u2019t map to a valid AudioStream.
#define LSN_AUDIO_HARDWARE_UNSUPPORTED_OPERATION_ERROR						The AudioObject doesn\u2019t support the requested operation.
#define LSN_AUDIO_HARDWARE_NOT_READY_ERROR									The AudioObject isn\u2019t ready to do the requested operation.
#define LSN_AUDIO_DEVICE_UNSUPPORTED_FORMAT_ERROR							The AudioStream doesn\u2019t support the requested format.
#define LSN_AUDIO_DEVICE_PERMISSIONS_ERROR									The requested operation can\u2019t be completed because the process doesn\u2019t have permission.
#define LSN_CORE_AUDIO_ERROR_UNKNOWN										Unknown Core Audio error.

// WAV Files.
#define LSN_WAV_PCM															PCM
#define LSN_WAV_ADPCM														ADPCM
#define LSN_WAV_IEEE_FLOAT													IEEE Floating Point
#define LSN_WAV_ALAW														A Law
#define LSN_WAV_MULAW														Mu Law
#define LSN_WAV_DVI_ADPCM													DVI ADPCM
#define LSN_WAV_YAMAHA_ADPCM												Yamaha ADPCM
#define LSN_WAV_GSM_6_10													GSM Audio
#define LSN_WAV_ITU_G_721_ADPCM												ITU G ADPCM
#define LSN_WAV_MPEG														MPEG Audio
#define LSN_WAV_EXTENSIBLE													Extensible

// General.
#define LSN_ERROR															Error






