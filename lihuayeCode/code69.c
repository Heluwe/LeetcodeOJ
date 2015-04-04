int mySqrt(int x) {
    if (x == 0 || x == 1)
		return x;
	double val=x, last;
	do{
		last = val;
		val = (val + x / val) / 2;
	} while (last!=val);
	return val;
}