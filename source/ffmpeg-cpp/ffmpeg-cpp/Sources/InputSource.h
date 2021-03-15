#ifndef DATA_SOURCE_H
#define DATA_SOURCE_H

namespace ffmpegcpp
{
	class InputSource
	{
	public:

		virtual ~InputSource() {}

		virtual void PreparePipeline() = 0;
		virtual bool IsDone() = 0;
		virtual void Step() = 0;

	};
}


#endif
