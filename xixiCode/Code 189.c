﻿int gcd(int a, int b){
	while (b ^= a ^= b ^= a %= b);
	return a;
}

void rotate(int nums[], int n, int k) {             //it's use move k distance from one elm to another ,and before that we should 
	int i, _i, j, _j, t;		            //save a the value ,and if n and k no common divisor,we can done in one for circulation
	k %= n;					    //or we should calculate common divisor val,then move from first elm to next in val times;
	if (k == 0) return;
	for (i = 0, _i = gcd(n, k); i < _i; ++i) {
		_j = j = i;
		do {
			j = (j + k) % n;
			t = nums[j];
			nums[j] = nums[_j];
			nums[_j] = t;
		} while (j != i);
	}
}


