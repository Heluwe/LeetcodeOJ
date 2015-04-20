bool isPalindrome(int x) {
    long rev=0,orig=x;
    if(x<0)return false;
    while(x){
        rev=rev*10+x%10;
        x/=10;
    }
    if((int)rev==orig)
    return true;
    else 
    return false;
}