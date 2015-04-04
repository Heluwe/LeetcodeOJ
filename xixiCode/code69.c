int mySqrt(int x) {
    int low=1,mid,high=x,r;
 if(x<=1)
 return x;
 
 while(low<=high){
     
     mid=(low+high)/2;
     
     if(x/mid==mid)
     return mid;
     
     else if(x/mid<mid)
     high=mid-1;
     
     else {
        
         low=mid+1;
         r=mid;
     }
 }
 
 return r;
 
}
