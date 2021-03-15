#ifndef FRAME_SINK_H
#define FRAME_SINK_H

#include "../ffmpeg.h"
#include "FrameSinkStream.h"

namespace ffmpegcpp
{
	class FrameSink
	{
	public:

		virtual FrameSinkStream* CreateStream() = 0;

		virtual AVMediaType GetMediaType() = 0;

		virtual ~FrameSink() {}
	};


}

#endif
