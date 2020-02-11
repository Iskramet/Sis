/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:18:05 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 15:18:25 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main() {
    char *str = "Пример строки";
    char *cmp = "стр";
    printf("Пример на strstr [%s]\n", strstr(str, cmp));

    char *str2 = "Пример строки";
    char *cmp2 = "стр";
    printf("Пример на ft_strstr [%s]\n", ft_strstr(str2, cmp2));
}
