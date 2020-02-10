#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%d", ft_atoi("42"));
	printf("%d", ft_atoi("4 2"));
	printf("%d", ft_atoi("-42"));
	printf("%d", ft_atoi("sad"));
    printf("\n");
	printf("Answer 424-420");
}
