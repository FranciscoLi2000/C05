#include <stdio.h>
#include <stdlib.h>
#define ABS(value) ((value) < 0 ? -(value) : (value))

int	is_safe(int row, int col, int *board)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i] == col || ABS(row - i) == ABS(col - board[i]))
			return (0);
		i++;
	}
	return (1);
}

int	backtrack(int row, int *board, int n)
{
	int	count;
	int	col;

	if (row == n)
		return (1);
	count = 0;
	col = 0;
	while (col < n)
	{
		if (is_safe(row, col, board))
		{
			board[row] = col;
			count += backtrack(row + 1, board, n);
		}
		col++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(int n)
{
	int	*board;
	int	solutions;

	board = (int *)malloc(n * sizeof(int));
	if (!board)
		return (-1);
	solutions = backtrack(0, board, n);
	free(board);
	return (solutions);
}

int	main(int argc, char **argv)
{
	int	n;
	int	solve;

	printf("How many queens do you want to put?\n");
	scanf("%i", &n);
	solve = ft_ten_queens_puzzle(n);
	printf("%d Queens Problem has %i solutions.\n", n, solve);
	return (0);
}
