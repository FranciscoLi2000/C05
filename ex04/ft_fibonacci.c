#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* 动态编程优化（记忆化）
我们可以使用 Memoization（将计算值存储在数组中以避免重新计算）来提高复杂度。 */
/*
int	ft_fibonacci_memo(int index, int *memo)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (memo[index] != -1)
		return memo[index];
	memo[index] = ft_fibonacci_memo(index - 1, memo) + ft_fibonacci_memo(index - 2, memo);
	return memo[index];
}
int	ft_fibonacci(int index)
{
	int	memo[index + 1];

	for (int i = 0; i <= index; i++)
		memo[i] = -1; // Inicializamos con -1 para indicar que no están calculados
	return ft_fibonacci_memo(index, memo);
}
*/

int	main(void)
{
	int	n;

	printf("Enter a integer: ");
	scanf("%i", &n);
	printf("Result: %i\n", ft_fibonacci(n));
	return (0);
}
