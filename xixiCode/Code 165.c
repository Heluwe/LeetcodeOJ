int compareVersion(char *version1, char *version2) {
	char *p1, *p2;
	p1 = version1; p2 = version2;
	int v1 = 0, v2 = 0;
	while (*p1 == 48)
		p1++;
	while (*p2 == 48)
		p2++;
	while (*p1 || *p2) {
		while (*p1 != '.'&&*p1)
			v1 = v1 * 10 + *p1++ - 48;
		while (*p2 != '.'&&*p2)
			v2 = v2 * 10 + *p2++ - 48;
		if (v1 > v2)
			return 1;
		else if (v1 < v2)return -1;
		else if (v1 == v2&&!*p1&&!*p2)return 0;
		while (*p1 == '.' || *p2 == '.') {
			if (*p1 == '.') {
				p1++;
			}
			if (*p2 == '.') {
				p2++;
			}
		}
		while ((*p1 == 48 || *p1 == '.') && !*p2)
			p1++;
		while ((*p2 == 48 || *p2 == '.') && !*p1)
			p2++;
		if (*p1&&!*p2)return 1;
		else if (*p2&&!*p1)return -1;
		else if (!*p1 && !*p2)
			return 0;
		v1 = 0; v2 = 0;
	}
}
