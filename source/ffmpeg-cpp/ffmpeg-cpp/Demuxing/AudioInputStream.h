#ifndef AUDIO_INPUT_STREAM_H
#define AUDIO_INPUT_STREAM_H

#include "../ffmpeg.h"
#include "InputStream.h"
#include "../Frame_Sinks/AudioFrameSink.h"

namespace ffmpegcpp
{
	class AudioInputStream : public InputStream
	{

	public:

		AudioInputStream(AVFormatContext* format, AVStream* stream);
		~AudioInputStream();

		void AddStreamInfo(ContainerInfo* info);

	protected:

		virtual void ConfigureCodecContext();
	};
}

#endif
