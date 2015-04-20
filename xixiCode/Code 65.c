bool isNumber(char* s) {
	char *p, *q;
	int dot = 0, notion = 0, e = 0;
	q = p = s;
	while (*p != '\0'&&*p == ' ')
		p++;
	if (*p == '\0')return false;
	if (*p == '+' || *p == '-') { 
		notion = 1; p++; }
	while (*p != '\0') {
		q = p;
		if (*p == 'e') {
			e++;
			while (*q != '\0') {
				if (*q == '.')return false;
				q++;
			}
			if ((!isdigit(*(p + 1)) && *(p + 1) != '+'&&*(p + 1) != '-') || (!isdigit(*(p - 1)) && *(p - 1) != '.') || e == 2)
				return false;
		}
		q = p;
		if (*p == '.') {
			dot++;
			if (!isdigit(*(p + 1)) && !isdigit(*(p - 1)) || dot == 2)
				return false;
		}
		q = p;
		if (*q == ' ')
			while (*q != '\0') {
				if (*q != ' ')return false;
				q++;
			}
		q = p;
		if (*p == '+' || *p == '-') {
			notion++;
			if (((*(p - 1) != ' '&&*(p - 1) != 'e') || notion == 2) && *(p - 1) != 'e' || *(p + 1) == '\0')
				return false;
		}
		if (!(isdigit(*p) || *p == 'e' || *p == '.' || *p == ' ' || *p == '+' || *p == '-'))
			return false;
		p++;
	}
	return true;
}