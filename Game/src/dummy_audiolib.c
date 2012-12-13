//
//  dummy_audiolib.c
//  Duke3D
//
//  Created by fabien sanglard on 12-12-12.
//  Copyright (c) 2012 fabien sanglard. All rights reserved.
//

#include "audiolib/fx_man.h"
#include <inttypes.h>

char *FX_ErrorString( int ErrorNumber ){
   static char nope = '\0';
    return &nope;
}

int   FX_SetupCard( int SoundCard, fx_device *device ){return 1;}
int   FX_GetBlasterSettings( fx_blaster_config *blaster ){return 1;}
int   FX_SetupSoundBlaster( fx_blaster_config blaster, int *MaxVoices, int *MaxSampleBits, int *MaxChannels ){return 1;}
int   FX_Init( int SoundCard, int numvoices, int numchannels, int samplebits, unsigned mixrate ){return FX_Ok;}
int   FX_Shutdown( void ){return 1;}
int   FX_SetCallBack( void ( *function )( uint32_t ) ){return FX_Ok;}
void  FX_SetVolume( int volume ){}
int   FX_GetVolume( void ){return 1;}

void  FX_SetReverseStereo( int setting ){}
int   FX_GetReverseStereo( void ){return 1;}
void  FX_SetReverb( int reverb ){}
void  FX_SetFastReverb( int reverb ){}
int   FX_GetMaxReverbDelay( void ){return 0;}
int   FX_GetReverbDelay( void ){return 1;}
void  FX_SetReverbDelay( int delay ){}

int FX_VoiceAvailable( int priority ){return 1;}
int FX_EndLooping( int handle ){return 1;}
int FX_SetPan( int handle, int vol, int left, int right ){return 1;}
int FX_SetPitch( int handle, int pitchoffset ){return 1;}
int FX_SetFrequency( int handle, int frequency ){return 1;}

int FX_PlayVOC( char *ptr, int pitchoffset, int vol, int left, int right,
               int priority, uint32_t callbackval ){return 1;}
int FX_PlayLoopedVOC( char *ptr, int32_t loopstart, int32_t loopend,
                     int pitchoffset, int vol, int left, int right, int priority,
                     uint32_t callbackval ){return 1;}
int FX_PlayWAV( char *ptr, int pitchoffset, int vol, int left, int right,
               int priority, uint32_t callbackval ){return 1;}
int FX_PlayLoopedWAV( char *ptr, int32_t loopstart, int32_t loopend,
                     int pitchoffset, int vol, int left, int right, int priority,
                     uint32_t callbackval ){return 1;}
int FX_PlayVOC3D( char *ptr, int pitchoffset, int angle, int distance,
                 int priority, uint32_t callbackval ){return 1;}
int FX_PlayWAV3D( char *ptr, int pitchoffset, int angle, int distance,
                 int priority, uint32_t callbackval ){return 1;}
int FX_PlayRaw( char *ptr, uint32_t length, unsigned rate,
               int pitchoffset, int vol, int left, int right, int priority,
               uint32_t callbackval ){return 1;}
int FX_PlayLoopedRaw( char *ptr, uint32_t length, char *loopstart,
                     char *loopend, unsigned rate, int pitchoffset, int vol, int left,
                     int right, int priority, uint32_t callbackval ){return 1;}
int FX_Pan3D( int handle, int angle, int distance ){return 1;}
int FX_SoundActive( int handle ){return 1;}
int FX_SoundsPlaying( void ){return 0;}
int FX_StopSound( int handle ){return 1;}
int FX_StopAllSounds( void ){return 1;}
int FX_StartDemandFeedPlayback( void ( *function )( char **ptr, uint32_t *length ),
                               int rate, int pitchoffset, int vol, int left, int right,
                               int priority, uint32_t callbackval ){return 1;}
int  FX_StartRecording( int MixRate, void ( *function )( char *ptr, int length ) ){return 1;}
void FX_StopRecord( void ){}




//Dummy music
#include "audiolib/music.h"

char *MUSIC_ErrorString(int ErrorNumber)
{
	return "";
}

int MUSIC_Init(int SoundCard, int Address)
{
	return 0;
}

int MUSIC_Shutdown(void)
{
	return 0;
}

void MUSIC_SetMaxFMMidiChannel(int channel)
{
}

void MUSIC_SetVolume(int volume)
{
}

void MUSIC_SetMidiChannelVolume(int channel, int volume)
{
}

void MUSIC_ResetMidiChannelVolumes(void)
{
}

int MUSIC_GetVolume(void)
{
	return 0;
}

void MUSIC_SetLoopFlag(int loopflag)
{
}

int MUSIC_SongPlaying(void)
{
	return 0;
}

void MUSIC_Continue(void)
{
}

void MUSIC_Pause(void)
{
}

int MUSIC_StopSong(void)
{
	return 0;
}

int MUSIC_PlaySong(uint8_t  *song, int loopflag)
{
	return 0;
}


void MUSIC_SetContext(int context)
{
}

int MUSIC_GetContext(void)
{
	return 0;
}

void MUSIC_SetSongTick(uint32_t PositionInTicks)
{
}

void MUSIC_SetSongTime(uint32_t milliseconds)
{
}

void MUSIC_SetSongPosition(int measure, int beat, int tick)
{
}

void MUSIC_GetSongPosition(songposition *pos)
{
}

void MUSIC_GetSongLength(songposition *pos)
{
}

int MUSIC_FadeVolume(int tovolume, int milliseconds)
{
	return 0;
}

int MUSIC_FadeActive(void)
{
	return 0;
}

void MUSIC_StopFade(void)
{
}

void MUSIC_RerouteMidiChannel(int channel, int cdecl function( int event, int c1, int c2 ))
{
}

void MUSIC_RegisterTimbreBank(uint8_t  *timbres)
{
}

void PlayMusic(short dummy)
{
        
}

