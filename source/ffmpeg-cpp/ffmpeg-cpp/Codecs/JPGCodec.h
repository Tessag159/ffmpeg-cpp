#ifndef JPG_CODEC_H
#define JPG_CODEC_H

#include "VideoCodec.h"

namespace ffmpegcpp
{

	class JPGCodec : public VideoCodec
	{

	public:

		JPGCodec();

		void SetCompressionLevel(int compressionLevel);
	};


}

#endif
