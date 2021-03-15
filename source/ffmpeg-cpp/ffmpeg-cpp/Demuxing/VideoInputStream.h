#ifndef VIDEO_INPUT_STREAM_H
#define VIDEO_INPUT_STREAM_H

#include "../ffmpeg.h"
#include "InputStream.h"
#include "../Frame Sinks/VideoFrameSink.h"
#include "../Info/VideoStreamInfo.h"

namespace ffmpegcpp
{
	class VideoInputStream : public InputStream
	{

	public:

		VideoInputStream(AVFormatContext* format, AVStream* stream);
		~VideoInputStream();

		void AddStreamInfo(ContainerInfo* info);

	protected:

		virtual void ConfigureCodecContext();

	};
}

#endif
