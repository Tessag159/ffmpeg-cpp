#ifndef PNG_CODEC_H
#define PNG_CODEC_H

#include "VideoCodec.h"

namespace ffmpegcpp
{

	class PNGCodec : public VideoCodec
	{

	public:

		PNGCodec();

		void SetCompressionLevel(int compressionLevel);
	};


}

#endif
