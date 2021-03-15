#ifndef H_264_NVENC_CODEC_H
#define H_264_NVENC_CODEC_H

#include "VideoCodec.h"

namespace ffmpegcpp
{

	class H264NVEncCodec : public VideoCodec
	{

	public:

		H264NVEncCodec();

		void SetPreset(const char* preset);
	};


}

#endif
