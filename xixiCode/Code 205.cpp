class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int  i ;
        char s1[255]={0},s2[255]={0};
        for(i=0;i<s.length();i++){
            if(s1[s[i]]!=s2[t[i]])return false;
            s1[s[i]]=i+1;s2[t[i]]=i+1;
        }
        return true;
    }
};