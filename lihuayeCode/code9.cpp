class Solution {
public:
    bool isPalindrome(int x) {
        int temp=0,value=x;
        if(x<0)
            return false;
        while(value)
        {
            temp=temp*10+value%10;
            value/=10;
        }
        if(temp==x)
            return true;
        else
            return false;
    }
};