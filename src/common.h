#include "types.h"

#define HYU_DEBUG

#ifdef HYU_DEBUG
#define hyu_ut_ad(x) do{\
	if (!(x)){\
		printf("Fatal : " #x " Error");\
	}\
}while(0)
#else
#define hyu_ut_ad(x)
#endif

void* ut_align_down(const void* ptr, ulint align_no);