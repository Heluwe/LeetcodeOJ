char* addBinary(char* a, char* b) {
	char *p1, *p2;
	p1 = a; p2 = b;
	int lena, lenb, lenc, lend, i, j, k, carry = 0;
	lena = strlen(a);
	lenb = strlen(b);
	lenc = lena > lenb ? lena : lenb;
	char *sum = (char*)malloc(sizeof(char)*(++lenc));
	for (i = lena - 1, j = lenb - 1, k = lenc - 1; i >= 0 && j >= 0; i--, j--, k--) {
		if (*(p1 + i) + *(p2 + j) + carry >= 98) {
			sum[k] = *(p1 + i) + *(p2 + j) - 2 - 48 + carry;
			carry = 1;
		}
		else {
			sum[k] = *(p1 + i) + *(p2 + j) - 48 + carry;
			carry = 0;
		}
	}
	if (i > j) {
		p2 = p1;
		j = i;
	}
	while (j >= 0) {
		if (carry) {
			if (*(p2 + j) + carry == 50) {
				carry = 1;
				sum[j + 1] = '0';
			}
			else {
				sum[j + 1] = *(p2 + j) + carry;
				carry = 0;
			}
		}
		else
			sum[j + 1] = *(p2 + j);
		j--;
	}
	if (carry)
		sum[0] = '1';
	else {
		i = sum[1];
		*++sum = i;
		lenc--;
	}
	p1 = sum;
	*(p1 + lenc) = '\0';
	return sum;
}