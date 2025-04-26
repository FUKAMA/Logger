#include "../../include/Default/DefaultLogger.h"
#include <stdio.h>
#include <assert.h>

namespace utl
{

	void DefaultLogger::Log(LogType level, const char* message, const char* file, int line)
	{
		if (level == LogType::Debug)
		{
			printf("\n");

			printf("Message\t:");
			printf(message);
			printf("\n");

			printf("File\t:");
			printf(file);
			printf("\n");

			printf("Line\t:");
			printf("%d", line);
			printf("\n");
		}

		if (level == LogType::Error)
		{

		}

		if (level == LogType::Warn)
		{
			assert(0 && message);
		}
	}

}