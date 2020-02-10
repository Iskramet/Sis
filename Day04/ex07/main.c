#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int index;
	int result;

	index = 56;
	result = ft_find_next_prime(index);
	printf("%d", result);
}
