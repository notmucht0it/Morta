#pragma once

#ifdef MR_PLATFORM_WINDOWS
	#ifdef MR_BUILD_DLL
		#define MORTA_API __delcspec(dllexport)
	#else
		#define MORTA_API __delcspec(dllimport)
	#endif //
#else
	#error Morta only supports Windows
#endif // MR_PLATFORM_WINDOWS
