#ifndef INPUT_STREAM_H
#define INPUT_STREAM_H

#include "../ffmpeg.h"
#include "../std.h"
#include "../Frame_Sinks/FrameSink.h"
#include "../Info/ContainerInfo.h"
#include "StreamData.h"

namespace ffmpegcpp
{
	class InputStream
	{

	public:

		InputStream(AVFormatContext* format, AVStream* stream);
		~InputStream();

		void Open(FrameSink* frameSink);

		virtual void DecodePacket(AVPacket* pkt);
		void Close();

		bool IsPrimed();
		int GetFramesProcessed();

		virtual void AddStreamInfo(ContainerInfo* info) = 0;

	protected:

		AVCodecContext* codecContext = nullptr;


		virtual void ConfigureCodecContext();

		AVFormatContext* format;
		AVStream* stream;

		float CalculateBitRate(AVCodecContext* ctx);

	private:

		AVRational timeBaseCorrectedByTicksPerFrame;

		FrameSinkStream* output = nullptr;

		AVFrame* frame;

		StreamData* metaData = nullptr;

		StreamData* DiscoverMetaData();

		int nFramesProcessed = 0;
		
		void CleanUp();

	};


}

#endif
