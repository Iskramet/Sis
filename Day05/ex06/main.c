/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:26:03 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 15:27:06 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char c1[] = "abcd";
    char c2[] = "abcdd";

    printf("%d\n", strcmp(c1, c2));
    printf("%d\n", ft_strcmp(c1, c2));
}
