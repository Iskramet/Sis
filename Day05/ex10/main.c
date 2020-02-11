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

char *ft_strcapitalize(char *str);

int main()
{
	char a[] = "salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("%s\n", a);
    printf("\n");
	printf("%s\n", ft_strcapitalize(a));

}
