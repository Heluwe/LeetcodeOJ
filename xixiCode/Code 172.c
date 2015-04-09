int trailingZeroes(int n) {
	long num = 5;
	int count;
	while (n / num) {
		count += n / num;
		num *= 5;
	}
	return count;
}
//the trailing zeros comes from 5,so it's to find the how many  multiples of 5.
//how many multiples of between 1 to 1000 
// 1000/5^1+1000/5^2+1000/5^3+1000/5^4