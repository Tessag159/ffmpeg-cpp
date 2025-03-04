#ifndef FFMPEG_H
#define FFMPEG_H


#include <stdlib.h>
#ifdef _WIN32
#define _CRTDBG_MAP_ALLOC 
#include <crtdbg.h>
#endif

extern "C"
{
	#include <libavcodec/avcodec.h>
	#include <libavutil/opt.h>
	#include <libavutil/imgutils.h>
	#include <libswscale/swscale.h>
	#include <libavformat/avformat.h>
	#include <libavutil/timestamp.h>
	#include <libavfilter/avfilter.h>
	#include <libavfilter/buffersink.h>
	#include <libavfilter/buffersrc.h>
	#include <libswresample/swresample.h>
	#include <libavutil/audio_fifo.h>
}

#endif
