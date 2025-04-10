#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i > 1)
	{
		result *= i;
		i--;
	}
	return (result);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	n;

	printf("Input a number: ");
	scanf("%d", &n);
	printf("iterative: %d\n", ft_iterative_factorial(n));
	printf("recursive: %d\n", ft_recursive_factorial(n));
	return (0);
}
