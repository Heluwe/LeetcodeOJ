class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=1;
        int a=1;
        while(i<32)
        {
            if(a==n)
                return true;
            a=a<<1;
            i++;
        }
        return false;
    }
};
