#ifndef FRAME_CONTAINER_H
#define FRAME_CONTAINER_H

#include "ffmpeg.h"

namespace ffmpegcpp
{
	class FrameContainer
	{
	public:

		FrameContainer(AVFrame* frame, AVRational* timeBase);
		~FrameContainer();

		AVFrame* GetFrame();
		AVRational* GetTimeBase();

	private:

		AVFrame* frame;
		AVRational *timeBase;
	};

}

#endif
