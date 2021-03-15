#ifndef VP9_CODEC_H
#define VP9_CODEC_H

#include "VideoCodec.h"

namespace ffmpegcpp
{

	class VP9Codec : public VideoCodec
	{

	public:

		VP9Codec();

		void SetDeadline(const char* deadline);
		void SetCpuUsed(int cpuUsed);

		void SetLossless(bool lossless);
		void SetCrf(int crf);
	};


}

#endif
