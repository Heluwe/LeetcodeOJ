class Solution
{
public:
    string convert(string s, int numRows)
    {
        string *str=new string[numRows];
        int index=0,len=s.length();
        while (index < len)
        {
            for (int i = 0; i < numRows&&index<len; ++i)
            {
                str[i] += s[index++];
            }
            for (int j = numRows-2; j >=1&&index<len ; --j)
            {
                str[j] += s[index++];
            }
        }
        for (int k = 1; k < numRows; ++k)
        {
            str[0] += str[k];
        }
        return str[0];
    }
};