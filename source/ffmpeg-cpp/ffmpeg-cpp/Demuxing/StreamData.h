#ifndef STREAM_DATA_H
#define STREAM_DATA_H

#include "../ffmpeg.h"

namespace ffmpegcpp
{
	struct StreamData
	{
		AVMediaType type;

		AVRational timeBase;
		AVRational frameRate;
	};
}

#endif
