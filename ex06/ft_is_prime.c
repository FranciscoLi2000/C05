/* https://blog.csdn.net/m0_53641110/article/details/126533044 */
int ft_is_prime(int nb)
{
    int i;

    if (nb < 2)
        return (0);
    i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}
