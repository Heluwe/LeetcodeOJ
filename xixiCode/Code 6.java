//the answer is easy to understand,we split a string to a char array.
// we add every char to the same row of a stringbuffer from index 1,
// add oblique and vertical separately ,and result  store in sb[0].
public class Solution {
    public String convert(String s, int nRows) {
        char[] arr=s.toCharArray();
        int len=arr.length,c=0;
        StringBuffer[] sb = new StringBuffer[nRows];
        for(int i=0;i<nRows;i++)
        sb[i] = new StringBuffer();
        while(c<len){
        for(int i=0;i<nRows&&c<len;i++)
            sb[i].append(arr[c++]);
        for(int i=nRows-2;i>=1&&c<len;i--)
            sb[i].append(arr[c++]);
        }
        for(int i=1;i<nRows;i++)
        sb[0].append(sb[i]);
          return sb[0].toString();  
        }
    }