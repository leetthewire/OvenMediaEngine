//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Kwon Keuk Han
//  Copyright (c) 2018 AirenSoft. All rights reserved.
//
//==============================================================================
#include "audio_track.h"

using namespace cmn;

AudioTrack::AudioTrack()
{
	_channel_layout.SetLayout(AudioChannel::Layout::LayoutUnknown);
}

void AudioTrack::SetSampleRate(int32_t sample_rate)
{
	_sample.SetRate((AudioSample::Rate)sample_rate);
}

int32_t AudioTrack::GetSampleRate() const
{
	return (int32_t)_sample.GetRate();
}

void AudioTrack::SetAudioTimestampScale(double scale)
{
	_audio_timescale = scale;
}

double AudioTrack::GetAudioTimestampScale() const
{
	return _audio_timescale;
}

AudioSample &AudioTrack::GetSample()
{
	return _sample;
}

const AudioSample &AudioTrack::GetSample() const
{
	return _sample;
}

AudioChannel &AudioTrack::GetChannel()
{
	return _channel_layout;
}

const AudioChannel &AudioTrack::GetChannel() const
{
	return _channel_layout;
}

void AudioTrack::SetChannel(AudioChannel channel)
{
	_channel_layout = channel;
}

void AudioTrack::SetAudioSamplesPerFrame(int nbsamples)
{
	_audio_samples_per_frame = nbsamples;
}

int AudioTrack::GetAudioSamplesPerFrame() const
{
	return _audio_samples_per_frame;
}

void AudioTrack::SetCondingMode(int mode)
{
	_coding_mode = mode;
}

const int &AudioTrack::GetCodingMode() const
{
	return _coding_mode;
}