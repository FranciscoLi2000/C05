#include <stdio.h>

/* 1. 二分查找法（Binary Search）
思路
设定 left = 0, right = n，然后用二分查找的方法找到 mid，使得 mid * mid 最接近但不超过 n。
时间复杂度: O(log n)（每次搜索范围减半）
空间复杂度: O(1)（只使用了几个变量） */
int	ft_sqrt_binary(int nb)
{
	int	left;
	int	right;
	int	mid;
	int	ans;

	ans = 0;
	if (nb < 0)
		return (-1);
	if (nb == 0 || nb == 1)
		return (nb);
	left = 0;
	right = nb;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid <= nb / mid)
		{
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (ans);
}

/* 2. 牛顿迭代法（Newton’s Method）
思路
通过迭代求解 x = (x + n / x) / 2，快速收敛到平方根的整数部分。

时间复杂度：牛顿法的收敛速度大约是 O(log n)，但比二分法快，接近 O(log log n)。
空间复杂度: O(1)*/
int	ft_sqrt_newton(int nb)
{
	int	x;

	if (nb < 0)
		return (-1);
	if (nb == 0 || nb == 1)
		return (nb);
	x = nb;
	while (x > nb / x)
		x = (x + nb / x) / 2;
	return (x);
}

int	main(void)
{
	int	n;

	printf("Enter an integer: ");
	scanf("%i", &n);
	printf("Binary search method: %i\n", ft_sqrt_binary(n));
	printf("Newton iterative method: %i\n", ft_sqrt_newton(n));
	return (0);
}
