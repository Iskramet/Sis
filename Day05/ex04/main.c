/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:15:38 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 15:16:00 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[64] = "copy in dest";
	char destt[64];
	char desttt[64];

	ft_strncpy(destt, src, 50);
	printf("%s", destt);
	printf("\n");
	strncpy(desttt, src, 50);
	printf("%s", desttt);
}
