#include <iostream>
#include <stdint.h>
using namespace std;
uint32_t reverseBits(uint32_t n) {
	uint32_t num = 1, course;
	uint32_t result = 0;
	int r_,n_;
	for (r_ = 0,n_=31; r_ < 32; r_++,n_--)
	{
		course = n&num;
		if (n_ - r_>0)
			course = course << n_ - r_;
		else
			course = course >> r_ - n_;
		result = result^course;
		num = num << 1;
	}
	return result;
}