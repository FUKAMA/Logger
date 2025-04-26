#pragma once
#include "../ILogger/ILogger.h"

namespace utl
{
	class DefaultLogger :public ILogger
	{
	public:

		virtual void Log(LogType level, const char* message, const char* file, int line)override final;

	};
}
