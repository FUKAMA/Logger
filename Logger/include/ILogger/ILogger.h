#pragma once
#include <cinttypes>

namespace utl
{

	enum class LogType :uint8_t
	{
		Debug,
		Warn,
		Error
	};

	/// <summary>
	/// ロスを残す機能を提供するインターフェースクラス
	/// </summary>
	class ILogger
	{
	public:

		virtual ~ILogger() = default;

		virtual void Log(LogType level, const char* message, const char* file, int line) = 0;

	};
}

#define LOG_DEBUG(logger, message)\
logger.Log(utl::LogType::Debug, message, __FILE__, __LINE__);

#define LOG_WARN(logger, message)\
logger.Log(utl::LogType::Warn, message, __FILE__, __LINE__);

#define LOG_ERROR(logger, message)\
logger.Log(utl::LogType::Error, message, __FILE__, __LINE__);
