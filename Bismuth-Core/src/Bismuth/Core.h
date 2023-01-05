#pragma once

#ifdef BS_PLATFORM_WINDOWS
	#ifdef BS_BUILD_DLL
		#define BISMUTH_API __declspec(dllexport)
	#else
		#define BISMUTH_API __declspec(dllimport)
	#endif

#else
	#error Bismuth only supports Windows!
#endif // BS_PLATFORM_WINDOWS
