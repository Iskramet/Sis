/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:12:00 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 19:17:35 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_str_is_alpha(char *str);

int main()
{
	char a[] = "s5f4";
    
    printf("%s\n", a);
    printf("\n");
    printf("%d\n", ft_str_is_alpha(a));
}
