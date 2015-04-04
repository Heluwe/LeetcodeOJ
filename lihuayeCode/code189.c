void rotate(int nums[], int n, int k)
		{
			int x;
			if (k > n)
				x = k%n;
			else
				x = k;
			int *ptr = (int *)malloc(sizeof(int)*x);
			for (int i = n-x ,j=0; i < n; i++,j++)
			{
				ptr[j] = nums[i];
			}
			for (int i = n - 1, j = n-x-1; j > -1; j--,i--)
			{
				nums[i] = nums[j];
			}
			for (int i = x - 1; i > -1; i--)
			{
				nums[i] = ptr[i];
			}
		}