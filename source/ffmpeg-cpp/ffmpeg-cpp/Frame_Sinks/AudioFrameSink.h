#ifndef AUDIO_FRAME_SINK_H
#define AUDIO_FRAME_SINK_H

#include "FrameSink.h"

namespace ffmpegcpp
{
	class AudioFrameSink : public FrameSink
	{
	public:

		virtual AVMediaType GetMediaType()
		{
			return AVMEDIA_TYPE_AUDIO;
		}

		virtual ~AudioFrameSink() {}
	};
}

#endif
