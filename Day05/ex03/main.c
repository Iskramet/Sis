/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:08:36 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 15:09:11 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    *ft_strcpy(char *dest, char *src);

int main()
{
	char src[] = "dawdasca";
    char dest[80];

    ft_strcpy(dest, src);
	printf("ft_strcpy - %s", dest);
	printf("\n");
}
