class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int bin[32] = { 0 };
		long res = 0;
		int len = nums.size();
		for (int i = 0; i<len; i++)
			for (int j = 31; j >= 0; j--)
				bin[j] += (nums[i] >> (31 - j)) & 1;
		for (int i = 0; i < 32; i++) {
			if (bin[i] % 3 != 0)
				res += 1;
			res <<= 1;
		}
		return res >> 1;
	}
};