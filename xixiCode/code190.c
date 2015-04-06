uint32_t reverseBits(uint32_t n) {
   int i,bin=0;
     for (i = 0; i < 32; i++) 
	 bin+=(n >> i & 1)<<(31-i);
    return bin;
    
}