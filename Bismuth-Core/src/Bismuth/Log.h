#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Bismuth {

	class BISMUTH_API Log
	{
	public:
		static void init();
		
		// Init logger pointers 
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() 
		{ 
			return s_CoreLogger; 
		}
		
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() 
		{ 
			return s_ClientLogger; 
		}

	private:

		// Init logger objects
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// Core logging macros
#define BS_CORE_TRACE(...)	::Bismuth::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BS_CORE_INFO(...)	::Bismuth::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BS_CORE_WARN(...)	::Bismuth::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BS_CORE_ERROR(...)	::Bismuth::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BS_CORE_FATAL(...)	::Bismuth::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logging macros
#define BS_TRACE(...)	::Bismuth::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BS_INFO(...)		::Bismuth::Log::GetClientLogger()->info(__VA_ARGS__)
#define BS_WARN(...)		::Bismuth::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BS_ERROR(...)	::Bismuth::Log::GetClientLogger()->error(__VA_ARGS__)
#define BS_FATAL(...)	::Bismuth::Log::GetClientLogger()->fatal(__VA_ARGS__)