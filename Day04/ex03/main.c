#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int nb;
	int power;
	int result;

	nb = 5;
	power = 2;
	result = ft_recursive_power(nb, power);
	printf("%d", result);
}
