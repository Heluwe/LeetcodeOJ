class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> str;
        if(nums.empty())
            return str;
        int front = nums[0];
        int temp = front;
        bool flag=false;
        for (int i = 1; i < nums.size(); ++i)
        {
            if(temp+1==nums[i])
            {
                temp=nums[i];
                flag=true;
                if(i!=nums.size()-1)
                    continue;
            }
            if (flag)
            {
                flag=false;
                string tempstr;
                tempstr+=to_string(front);
                tempstr += "->";
                tempstr +=to_string(temp);
                str.push_back(tempstr);
                front = nums[i];
                temp = front;
                if(i!=nums.size()-1)
                    continue;
            }
            else if(temp+1!=nums[i])
            {
                flag=false;
                string tempstr;
                tempstr+=to_string(front);
                str.push_back(tempstr);
                front=nums[i];
                temp=front;
            }
        }
        if(nums.size()==1||nums[nums.size()-1]!=nums[nums.size()-2]+1)
        {
                string tempstr;
                tempstr+=to_string(front);
                str.push_back(tempstr);
        }
        return str;
    }
};
