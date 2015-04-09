int titleToNumber(char *s) {
	char *p = s;
	int sum = 0, i;
	while (*p) {
		for (i = 0; i < 26; i++)
			if (*p == 'A' + i) {
				sum = sum * 26 + i + 1;
				p++;
			}
	}
	return sum;
}