public class Solution {
    public List<Integer> plusOne(List<Integer> digits) {
        boolean carry=false;
        int i;
        for( i=digits.size()-1;i>=0;i--){
            if(carry){
                
                if(digits.get(i)+1==10){
                    carry=true;
                    digits.set(i,0);
                }
                else{
                 digits.set(i,digits.get(i)+1);
                 carry=false;
                }
            } 
            if(i==digits.size()-1){
                if(digits.get(digits.size()-1)+1==10){
                carry=true;
                digits.set(i,0);
                }
                else
                digits.set(i,digits.get(i)+1);
                
            }
              
        }
        
        if(i<0&&digits.get(0)==0){
        digits.set(0,1);
        digits.add(0);
        }
        return digits;
      
        
    }
}