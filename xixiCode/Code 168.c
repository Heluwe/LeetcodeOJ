char *convertToTitle(int n)
{
	char *s, *p;
	int size = 0, num = n;
	while (num)
	{
		num = (num - 1) / 26;
		size++;
	}
	s = (char *)malloc(sizeof(char)*size);
	p = s;
	while (n)
	{
		*(p + --size) = 'A' + (n - 1) % 26;//carry from low to high,it's special to s string,so use size is important thing.
		if (n == 26)
			return s;
		else
			n = (n - 1) / 26;// why n-1 come out, because of the carry;
	}
	return s;
}