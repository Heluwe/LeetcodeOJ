public class Solution {
        public class Coord {
            int x;
            int y;
            Coord(int x, int y) {
                this.x = x;
                this.y = y;
            }
        }
        public int numIslands(char[][] grid) {
            int i, j, res = 0;
            if (grid.length != 0 && grid[0].length != 0)
                for (i = 0; i < grid.length; i++)
                    for (j = 0; j < grid[0].length; j++)
                        if (grid[i][j] == '1') {
                            BFS(grid, i, j);
                            res++;
                        }
            return res;
        }
        public void BFS(char[][] grid, int i, int j) {
            Queue<Coord> Q = new LinkedList<Coord>();
            Coord pos;
            int x, y;
            Q.add(new Coord(i, j));
            grid[i][j] = '0';
            while (!Q.isEmpty()) {
                pos = Q.poll();
                x = pos.x;
                y = pos.y;
                if (x + 1 < grid.length && grid[x + 1][y] == '1') {
                    grid[x + 1][y] = '0';
                    Q.add(new Coord(x+ 1, y));
                }
                if (x - 1 >= 0 && grid[x - 1][y] == '1') {
                    grid[x - 1][y] = '0';
                    Q.add(new Coord(x - 1, y));
                }
                if (y + 1 < grid[0].length&&grid[x][y + 1] == '1') {
                    grid[x][y+ 1] = '0';
                    Q.add(new Coord(x, y+1));
                }
                if (y- 1 >= 0 && grid[x][y - 1] == '1') {
                    grid[x][y - 1] = '0';
                    Q.add(new Coord(x, y - 1));
                }
            }
        }
    }