#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	int	index;
	int result;

	index = 2147483639 ;
	result = ft_is_prime(index);
	printf("%d", result);
}
