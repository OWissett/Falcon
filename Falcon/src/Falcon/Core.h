#pragma once

#ifdef FAL_PLATFORM_WINDOWS
	#ifdef FAL_BUILD_DLL
		#define FALCON_API __declspec(dllexport)
	#else
		#define FALCON_API __declspec(dllimport)
	#endif
#else
#error Falcon is only suported by windows!
#endif