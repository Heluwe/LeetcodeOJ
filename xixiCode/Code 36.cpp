class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		bool res = false;
		int k = 0, m, n;
		for (int i = 0; i < 9; i++) {
			vector <bool>cols(9, false), rows(9, false);
			for (int j = 0; j < 9; j++) {
				if (board[i][j] != '.') {
					int id1 = board[i][j] - '1';
					if (rows[id1] != 0)
						return false;
					else
						rows[id1] = 1;
				}
				if (board[j][i] != '.') {
					int id2 = board[j][i] - '1';
					if (cols[id2] != 0)
						return false;
					else
						cols[id2] = 1;
				}
			}
		}
		for (int n = 0; n<3; n++) {
			for (int m = 0; m < 3; m++) {
				vector<int> boxs(9, false);
				for (int i = n * 3; i < n * 3 + 3; i++) {
					for (int j = m * 3; j < m * 3 + 3; j++) {
						if (board[i][j] != '.') {
							int id3 = board[i][j] - '1';
							if (boxs[id3] != 0)
								return false;
							else
								boxs[id3] = 1;
						}
					}
				}
			}
		}
		return true;
	}
};
