uint32_t reverseBits(uint32_t n) {
	int i, bin = 0;
	for (i = 0; i < 32; i++)                 // n>>i & 1 mean take  a bit which is   last  one of the number 
		bin += (n >> i & 1) << (31 - i);     // and then put in the first position of number,the last one should move 31 times,
	return bin;								 // and the penult move 30times,and so on
}