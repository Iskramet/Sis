#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int nb;
	int result;

	nb = 2;
	result = ft_recursive_factorial(nb);
	printf("%d", result);
}
