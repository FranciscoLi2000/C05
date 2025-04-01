
int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((nb < 0 && power == 0) || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power));
}
/*
int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((nb < 0 && power == 0) || power == 0)
		return (1);
	if (nb % 2 == 0)
		return (ft_recursive_power(nb, power / 2) * ft_recursive_power(nb, power / 2));
	return (nb * ft_recursive_power(nb, power - 1));
}*/
