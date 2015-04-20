int lengthOfLastWord(char* s) {
	char *p, *q;
	int len = 0;
	q = p = s;
	while (*p == ' ')p++;
	q = p;               //"      ab"
	while (*p != '\0')
		if (*p != ' ') {
			p++;
			if (*p == '\0')
				return p - q; // " abc"

		}
		else {
			len = p - q;
			while (*p == ' ')p++; 
			q = p;             //"a              b       "
		}
		return len;
}