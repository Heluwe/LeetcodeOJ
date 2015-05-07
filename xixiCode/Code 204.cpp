class Solution {
public:
	int countPrimes(int n) {
		if (n < 2)return 0;
		int res = 0;
		vector<bool> sign(n - 1, true);
		sign[0] = false;
		for (int i = 2; i <= sqrt(n); i++) {
			if (sign[i - 1]) {
				for (int j = i*i; j < n; j += i)
					sign[j - 1] = false;
			}
		}
		for (int j = 0; j < n; j++)
			if (sign[j]) res++;
		return res - 1;
	}
};