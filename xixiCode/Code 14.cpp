class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n,min,i,j,minidx;
        string s;
        if(strs.size()==0)return "";
        n=strs.size(); minidx=0; min=strs[0].length();
        for( i=1;i<n;i++)
            if(strs[i].length()<min){
                min=strs[i].length();minidx=i;
            }
        s=strs[minidx];
        for(i=0;i<n;i++){
        	for(j=0;j<min;j++){ 
        	    if(strs[i][j]!=s[j]) s=s.substr(0,j);
        }
        min=s.length();
        }
        return s;
    }
};