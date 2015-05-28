int check(int x, int y, int n_queen, int**chess){
	int i, j, n, m;
	for (m = -(n_queen - 1); m < n_queen; m++)
	for (n = -(n_queen - 1); n < n_queen; n++){
		if (x + m < 0 || x + m >= n_queen || y + n < 0 || y + n >= n_queen)//判断是否越界
			continue;
		if ((abs(m) == abs(n) || (m != 0 && n == 0)) && chess[x + m][y + n] == 1)//下面的简化
			return 0;
	}//for
	return 1;
} //检查位置是否合理      

void NQueen(int row, int n_queen, int**chess, int *count){
	int i, j;
	int **chess_copy = (int**)malloc(sizeof(int*)*n_queen);
	for (i = 0; i < n_queen; i++)
		chess_copy[i] = (int*)malloc(sizeof(int)*n_queen);
	for (i = 0; i < n_queen; i++)
	for (j = 0; j < n_queen; j++)
		chess_copy[i][j] = chess[i][j];
	//复制棋盘
	if (row == n_queen)   //本次符合，输出
		(*count)++;
	else{
		for (j = 0; j < n_queen; j++){//代表一列的四个棋子
			if (check(row, j, n_queen, chess)){//为什么传chess不传chesscopy  因为第二次调用fourqueen的时候chess是以前的chesscopy
				for (i = 0; i < n_queen; i++)
					*(*(chess_copy + row) + i) = 0;//先将row 行每个赋值为0
				*(*(chess_copy + row) + j) = 1;
				NQueen(row + 1, n_queen, chess_copy, count);//本行匹配，匹配下一行
			}
		}//for
	}
}

int totalNQueens(int n) {
	int i;
	int count = 0;
	int **chess = (int**)malloc(sizeof(int*)*n);
	for (i = 0; i < n; i++){
		chess[i] = (int*)malloc(sizeof(int)*n);
		memset(chess[i], 0, sizeof(int)*n);
	}
	NQueen(0, n, chess, &count);
	return count;
}