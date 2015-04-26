public class Solution {
    public String countAndSay(int n) {
        int i,len,count=0,j;
        char t;
        StringBuffer sb= new StringBuffer("1");
        StringBuffer temp;  
        for(j=1;j<n;j++){
            temp=sb;
            sb=new StringBuffer();
            count=1;
            t=temp.charAt(0);
           for(i=1;i<temp.length();i++)
           if( temp.charAt(i)!=t ){
            sb.append(count).append(t);
            count=1;
            t=temp.charAt(i);
            }
            else
                count++;
          sb.append(count).append(t);  
        }
       return sb.toString(); 
    }
}