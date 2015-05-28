class Solution {
public:
	void sortColors(vector<int>& nums) {
		int low, cur, high, len;
		low = 0, cur = 0, len = nums.size(), high = len - 1;
			while (cur <= high) {
				if (nums[cur] == 0) {
					if (nums[low] > 0)swap(nums[low], nums[cur]);
					if (++low > cur) cur++;
				}
				else if (nums[cur] == 2) {
					if (nums[high] < 2)swap(nums[high], nums[cur]);
					if (--high < cur)break;
				}
				else cur++;
			}
	}
};