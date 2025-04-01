/* https://blog.csdn.net/a2632699773/article/details/111377984 */

/* https://blog.csdn.net/weixin_54570972/article/details/132606675 */

/* 使用一个N×N的矩阵A（二维数组）来模拟棋盘，aij = 0或1。0表示棋盘上没有棋子，1表示棋盘上有棋子（i表示行，j表示列）。

也可以使用一个一维数组（a[N]）来存储棋子的放法，即a[i]表示第i行棋子在第几列。这样便可保证所有的棋子都不存在行冲突了。

使用回溯法来暴力搜索所有的情况。具体实现有递归和非递归两种办法。*/

int	ft_ten_queens_puzzle(void)
{
	int	row;
	int	col;

	row = 1;
	while (row <= 10)
	{
		col = 1;
		while (col <= 10)
		{
			col++;
		}
		row++;
	}
}
