
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
