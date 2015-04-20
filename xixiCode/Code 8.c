int myAtoi(char* str) {
	int neg = 1, sign = 0;
	char *p, *q;
	q = p = str;
	if (!*str)return 0;
	long long num = 0;
	while (*p == ' ')p++;
	q = p;
	while (!*p) {
		if (*p == '+')
			sign = 1;
		if (*p == '-'&&sign == 1)
			sign = -1;
	}
	if (sign == -1)
		return 0;
	p = q;
	if (*p == '+')p++;
	else if (*p == '-') {
		neg = -1;
		p++;
	}
	while (*p&&isdigit(*p)) {
		num = num * 10 + (*p - 48);
		if (num*neg > INT_MAX)
			return INT_MAX;
		else if (num*neg < INT_MIN)
			return INT_MIN;
		p++;
	}
	return num*neg;
}