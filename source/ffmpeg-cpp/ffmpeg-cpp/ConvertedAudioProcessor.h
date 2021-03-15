#ifndef CONVERTED_AUDIO_PROCESSOR_H
#define CONVERTED_AUDIO_PROCESSOR_H

#include "ffmpeg.h"

namespace ffmpegcpp
{
	class ConvertedAudioProcessor
	{
	public:

		virtual void WriteConvertedFrame(AVFrame* convertedFrame) = 0;
	};

}

#endif
