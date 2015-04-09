int reverse(int x) {
    long sum=0;
    while(x/10)
    {
        sum=sum*10+x%10*10;
        x/=10;
    }
      return (sum+x<=0x7fffffff&&sum+x>=0x7fffffff*(-1))?sum+x:0;
}   //to avoid overflow  one is sum define as a long type and the value between -2^31 to 2^31