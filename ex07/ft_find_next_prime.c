#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb) /* 只检查 6k ± 1 */
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb % 2 == 0)
		nb = nb + 1;
	nb = nb + 2;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}

int	main(void)
{
	int	n;

	printf("Enter a number: ");
	scanf("%i", &n);
	if (ft_is_prime(n))
		printf("Your number %i is prime number.\n", n);
	else
		printf("Your number %i is NOT prime number.\n", n);
	printf("After the number %i, we can find %i is a prime number.\n", n, ft_find_next_prime(n));
	return (0);
}
