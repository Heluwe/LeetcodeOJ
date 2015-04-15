bool isChar(char *a){
	if (('a' <= *a&&*a <= 'z') || ('A' <= *a&&*a <= 'Z') || ('0' <= *a&&*a <= '9')){
		if ('A' <= *a&&*a <= 'Z')
			*a += 32;
		return true;
	}
	else
		return false;
}

bool isPalindrome(char *s) {
	char *p, *q;
	int len = strlen(s);
	if (!len)
		return true;
	p = s; q = &s[len - 1];
	while (p != q) {
		while (!isChar(p)) {
			if (p == &s[(len + 1) / 2])return true;
			if (p == &s[len - 1]) {
				p++; break;
			}
			p++;
		}
		while (!isChar(q)) {
			if (q == s) {
				q--; break;
			}
			q--;
		}
		if (p == &s[(len + 1) / 2])return true;
		if (*q != *p)return false;
		p++; q--;
	}
	return true;
}