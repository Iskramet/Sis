#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int nb;
	int power;
	int result;

	nb = 2;
	power = 3;
	result = ft_iterative_power(nb, power);
	printf("%d", result);
}
