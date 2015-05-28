class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int low, high, mid, len;
		len = nums.size(); low = 0; high = len - 1; mid = (len - 1) / 2;
		while (low<high) {
			if (nums[mid] == target)return mid;
			else if (nums[mid]>target) high = mid - 1;
			else low = mid + 1;
			mid = (low + high) / 2;
		}
		return nums[mid] >= target ? mid : mid + 1;//before mid =(mid) or after mid=(mid+1)
	}
};