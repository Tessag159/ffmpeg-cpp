#ifndef OPEN_CODEC_H
#define OPEN_CODEC_H

#include "ffmpeg.h"

namespace ffmpegcpp
{
	class OpenCodec
	{
	public:

		OpenCodec(AVCodecContext* openCodecContext);
		~OpenCodec();

		AVCodecContext* GetContext();

	private:

		AVCodecContext* context;
	};


}

#endif
