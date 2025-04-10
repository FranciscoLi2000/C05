#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((nb < 0 && power == 0) || power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((nb < 0 && power == 0) || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power));
}*/

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((nb < 0 && power == 0) || power == 0)
		return (1);
	if (nb % 2 == 0)
		return (ft_recursive_power(nb, power / 2) * ft_recursive_power(nb, power / 2));
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	n;
	int	pow;

	printf("Input two number, one for the base, the other the power.\n");
	scanf("%d %d", &n, &pow);
	printf("iterative: n = %d, power = %d, result = %d\n", n, pow, ft_iterative_power(n, pow));
	printf("recursive: n = %d, power = %d, result = %d\n", n, pow, ft_recursive_power(n, pow));
	return (0);
}
