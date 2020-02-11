/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:49:23 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 17:52:00 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char c1[] = "abcdd";
    char c2[] = "abcdb";

    printf("%d\n", strncmp(c1, c2, 5));
    printf("%d\n", ft_strncmp(c1, c2, 5));
}
