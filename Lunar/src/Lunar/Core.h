#pragma once

#ifdef LU_PLATFORM_WINDOWS
	#ifdef LU_BUILD_DLL
		#define LUNAR_API __declspec(dllexport)
	#else 
		#define LUNAR_API __declspec(dllimport)
	#endif
#else
#error Lunar only support windows!
#endif //  LU_PLATFORM_WINDOWS

