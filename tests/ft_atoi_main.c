/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 12:10:41 by mlamarre          #+#    #+#             */
/*   Updated: 2016/06/24 16:35:19 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int		ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int		test_atoi(char *str)
{
	int		i;
	int		n;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
		n = -1;
	else
		n = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	return (i * n);
}

int main()
{
    int val;
    char str[20];

    strcpy(str, "-989939");
    val = test_atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

    strcpy(str, "This is a string");
    val = test_atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

    return(0);
}
