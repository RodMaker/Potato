#pragma once

#ifdef PT_PLATFORM_WINDOWS
	#ifdef PT_BUILD_DLL
		#define POTATO_API __declspec(dllexport)
	#else
		#define POTATO_API __declspec(dllimport)
	#endif
#else
	#error Potato only supports Windows!
#endif

#ifdef PT_ENABLE_ASSERTS
	#define PT_ASSERT(x, ...) { if(!(x)) {PT_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define PT_CORE_ASSERT(x, ...) { if(!(x)) { PT_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define PT_ASSERT(x, ...)
	#define PT_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)