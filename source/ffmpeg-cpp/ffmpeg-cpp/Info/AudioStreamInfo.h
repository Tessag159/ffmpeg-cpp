#ifndef AUDIO_STREAM_INFO_H
#define AUDIO_STREAM_INFO_H

#include "../ffmpeg.h"

namespace ffmpegcpp
{
	struct AudioStreamInfo
	{
		int id;
		AVRational timeBase;
		const AVCodec* codec;
		float bitRate;

		int sampleRate;
		int channels;

		uint64_t channelLayout;
		char channelLayoutName[255];

	};
}

#endif
