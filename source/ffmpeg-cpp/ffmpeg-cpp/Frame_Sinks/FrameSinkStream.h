#ifndef FRAME_SINK_STREAM_H
#define FRAME_SINK_STREAM_H

#include "../ffmpeg.h"
#include "FrameWriter.h"
#include "../Demuxing/StreamData.h"

namespace ffmpegcpp
{
	class FrameSinkStream
	{
	public:

		FrameSinkStream(FrameWriter* frameSink, int streamIdx);

		void WriteFrame(AVFrame* frame, StreamData* metaData);

		void Close();

		bool IsPrimed();

	private:

		FrameWriter* frameSink;
		int streamIndex;
	};
}

#endif
