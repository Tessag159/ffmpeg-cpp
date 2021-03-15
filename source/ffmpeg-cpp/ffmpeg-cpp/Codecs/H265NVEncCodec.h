#ifndef H_265_NVENC_CODEC_H
#define H_265_NVENC_CODEC_H

#include "VideoCodec.h"

namespace ffmpegcpp
{

	class H265NVEncCodec : public VideoCodec
	{

	public:

		H265NVEncCodec();

		void SetPreset(const char* preset);
	};


}

#endif
