#ifndef CODEC_DEDUCER_H
#define CODEC_DEDUCER_H

#include "ffmpeg.h"

namespace ffmpegcpp
{
	class CodecDeducer
	{
	public:

		static AVCodec* DeduceEncoderFromFilename(const char* fileName);

		static AVCodec* DeduceEncoder(AVCodecID codecId);
		static AVCodec* DeduceEncoder(const char* codecName);

		static AVCodec* DeduceDecoder(AVCodecID codecId);
		static AVCodec* DeduceDecoder(const char* codecName);
	};

}

#endif
