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

int ft_str_is_numeric(char *str);

int main()
{
	char a[] = " ";
    
    printf("%s\n", a);
    printf("\n");
    printf("%d\n", ft_str_is_numeric(a));
}
