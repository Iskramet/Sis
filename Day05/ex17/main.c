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

char *ft_strncat(char *dest, char *src, int nb);

int main()
{
    char c1[] = "hndf";
    char c2[] = "abcdd";

    //printf("%d\n", strcmp(c1, c2));
    printf("%s\n", ft_strncat(c1, c2, 9));
}
