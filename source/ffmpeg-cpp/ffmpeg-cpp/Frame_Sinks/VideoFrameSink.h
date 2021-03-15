#ifndef VIDEO_FRAME_SINK_H
#define VIDEO_FRAME_SINK_H

#include "FrameSink.h"

namespace ffmpegcpp
{
	class VideoFrameSink : public FrameSink
	{
	public:

		virtual AVMediaType GetMediaType()
		{
			return AVMEDIA_TYPE_VIDEO;
		}

		virtual ~VideoFrameSink() {}
	};
}

#endif
