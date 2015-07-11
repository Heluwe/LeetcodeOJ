class Solution
{
public:
    bool isPalindrome(string s)
    {
        string temp;
        for (int i = 0; i < s.length(); ++i)
        {
            if((s[i]>='a'&&s[i]<='z')||
                    (s[i]>='A'&&s[i]<='Z')||
                    (s[i]>='0'&&s[i]<='9'))
            {
                char c=s[i];
                if(c>='A'&&c<='Z')
                {
                    c+=32;
                }
                temp+=c;
            }
        }
        cout<<temp<<endl;
        int mid= temp.length()/2;
        int i = 0;
        for (int j=temp.length()-1; i <= mid; ++i,--j)
        {
            if(temp[i]!=temp[j])
                return false;
        }
        return true;
    }
};