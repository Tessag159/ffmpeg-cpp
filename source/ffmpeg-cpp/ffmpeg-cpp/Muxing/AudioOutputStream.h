#ifndef AUDIO_OUTPUT_STREAM_H
#define AUDIO_OUTPUT_STREAM_H

#include "../ffmpeg.h"
#include "../Codecs/Codec.h"
#include "OutputStream.h"
#include "Muxer.h"

namespace ffmpegcpp
{
	class AudioOutputStream : public OutputStream
	{
	public:

		AudioOutputStream(Muxer* muxer, Codec* codec);

		virtual void OpenStream(AVStream* stream, int containerFlags);

		virtual void WritePacket(AVPacket* pkt, OpenCodec* openCodec);

		virtual bool IsPrimed();

	protected:

		virtual void PreparePacketForMuxer(AVPacket* pkt);

	private:

		void LazilyInitialize(OpenCodec* openCodec);

		AVStream* stream;

		bool initialized = false;

		AVRational codecTimeBase;
	};
}

#endif
