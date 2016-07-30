#include "common.h"
void* ut_align_down(const void* ptr, ulint align_no){
	return((void*)(((ulint) ptr) & ~(align_no - 1)));
}