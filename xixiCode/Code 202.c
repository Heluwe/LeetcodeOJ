int Squares(int n) {
	int sum = 0;
	while (n) {
		sum += (n % 10)*(n % 10);
		n /= 10;
	}
	return sum;
}
bool isHappy(int n) {
	int fast, low;
	fast = low = n;
	do {
		fast = Squares(fast);
		fast = Squares(fast);
		low = Squares(low);
	} while (fast != low);
	if (fast == 1)
		return true;
	else
		return false;
}