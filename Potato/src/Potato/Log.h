#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Potato {

	class POTATO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// CORE log macros
#define PT_CORE_TRACE(...)   ::Potato::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PT_CORE_INFO(...)    ::Potato::Log::GetClientLogger()->info(__VA_ARGS__)
#define PT_CORE_WARN(...)    ::Potato::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PT_CORE_ERROR(...)   ::Potato::Log::GetClientLogger()->error(__VA_ARGS__)
#define PT_CORE_FATAL(...)   ::Potato::Log::GetClientLogger()->fatal(__VA_ARGS__)

// CLIENT log macros
#define PT_TRACE(...)        ::Potato::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PT_INFO(...)         ::Potato::Log::GetClientLogger()->info(__VA_ARGS__)
#define PT_WARN(...)         ::Potato::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PT_ERROR(...)        ::Potato::Log::GetClientLogger()->error(__VA_ARGS__)
#define PT_FATAL(...)        ::Potato::Log::GetClientLogger()->fatal(__VA_ARGS__)