public class Solution {
    public boolean isValid(String s) {
        Stack<Character> S = new Stack<Character>();
        char arr[]=s.toCharArray();
        int len=arr.length;
        if(len%2!=0||arr[0]=='\0')return false;
        S.push(arr[0]);
        for(int i=1;i<len&&!S.isEmpty();i++){
        if(arr[i]=='('||arr[i]=='{'||arr[i]=='[')
        S.push(arr[i]);
        else {
        if(arr[i]==')'&&S.peek()!='(')return false;

        if(arr[i]=='}'&&S.peek()!='{')return false;
    
        if(arr[i]==']'&&S.peek()!='[')return false;
        S.pop();
        }
        }
        if(S.isEmpty())
        return true;
        else
        return false;
    }
}