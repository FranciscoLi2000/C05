#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	n;

	printf("Enter a number: ");
	scanf("%i", &n);
	if (ft_is_prime(n))
		printf("Print %i if it is a prime number.\n", n);
	else
		printf("%i is not prime number.\n", n);
	return (0);
}
