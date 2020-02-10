#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int nb;
	int result;

	nb = 2;
	result = ft_iterative_factorial(nb);
	printf("%d", result);
}
