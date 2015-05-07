class Solution {
    public:
    int removeDuplicates(int A[], int n) {
        if(n<2)return n; 
        int id = 0,i;
        for( i = 1; i < n; ++i) 
            if(A[i] == A[i-1])  id++;
            else A[i-id] = A[i];
        return i-id;
    }
};