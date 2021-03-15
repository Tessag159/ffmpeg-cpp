#ifndef VIDEO_STREAM_INFO_H
#define VIDEO_STREAM_INFO_H

#include "../ffmpeg.h"

namespace ffmpegcpp
{
	struct VideoStreamInfo
	{
		int id;
		AVRational frameRate;
		AVRational timeBase;
		const AVCodec* codec;
		float bitRate;

		AVPixelFormat format;
		const char* formatName;

		int width, height;
	};
}

#endif
