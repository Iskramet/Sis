#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int index;
	int result;

	index = 6;
	result = ft_fibonacci(index);
	printf("%d", result);
}
