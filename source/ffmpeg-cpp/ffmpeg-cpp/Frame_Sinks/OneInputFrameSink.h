#ifndef ONE_INPUT_FRAME_SINK_H
#define ONE_INPUT_FRAME_SINK_H

#include "../ffmpeg.h"

#include "FrameWriter.h"
#include "FrameSink.h"


namespace ffmpegcpp
{
	class OneInputFrameSink : public FrameSink
	{
	public:

		OneInputFrameSink(FrameWriter* writer, AVMediaType mediaType);
		~OneInputFrameSink();

		virtual AVMediaType GetMediaType();

		FrameSinkStream* CreateStream();


	private:

		int nStreamsGenerated = 0;

		FrameWriter* writer;

		FrameSinkStream* stream = nullptr;

		AVMediaType mediaType;
	};
}

#endif
