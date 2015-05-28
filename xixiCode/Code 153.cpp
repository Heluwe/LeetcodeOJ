class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int minv=nums[0];
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[low]<=nums[high])
            return min(nums[low],minv);
            else{
                if(nums[mid]>=nums[low])
                low=mid+1;
                else high=mid;//mid could be minimal
            }
        }
        return minv;
    }
};