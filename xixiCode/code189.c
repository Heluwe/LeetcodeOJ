int gcd(int a, int b)
{
	 while(b^=a^=b^=a%=b);  
     return a; 
}

void rotate(int nums[], int n, int k) {
int i,_i,j,_j,t;
	k %= n;

	if (k == 0) return;

	for ( i = 0, _i = gcd(n, k); i < _i; ++i) {
		 _j=j = i;
		do {
			j = (j + k) % n;
			 t = nums[j];
			nums[j] = nums[_j];
			nums[_j] = t;
			
		} while (j != i);


	}


}


