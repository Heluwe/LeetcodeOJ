int *getRow(int rowIndex){
	int *num, *t, i, _i;
	num = (int *)malloc(sizeof(int)*(rowIndex + 1));
	t = (int *)malloc(sizeof(int)*(rowIndex + 1));
	num[0] = 1; num[rowIndex] = 1;
	t[0] = 1; t[1] = 1;
	for (_i = 1; _i <= rowIndex; _i++){
		for (i = 1; i < _i; i++)
			num[i] = t[i - 1] + t[i];
		for (i = 1; i < _i; i++)
			t[i] = num[i];
		t[_i] = 1;
	}
	return num;
}