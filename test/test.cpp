#include "Logger.h"

int main()
{

	utl::DefaultLogger logger;

	LOG_DEBUG(logger, "aaa");
	LOG_DEBUG(logger, "aaa");


	return 0;
}