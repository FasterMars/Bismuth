#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Bismuth  {

	// Referencing loggers from Log.h
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;
	
	void Log::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		
		// Core logging init
		s_CoreLogger = spdlog::stdout_color_mt("BISMUTH");
		s_CoreLogger->set_level(spdlog::level::trace);
			
		// Client logging init
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}