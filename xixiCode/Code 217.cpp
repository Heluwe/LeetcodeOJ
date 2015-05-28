class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		map<int, int> mymap;
		vector<int>::iterator it;
		for (it = nums.begin(); it < nums.end(); it++)
		if (mymap[*it])return true;
		else mymap[*it] = 1;
		return false;
	}
};