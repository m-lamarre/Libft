/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:25:51 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 11:12:08 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main(void)
{
    int c;

    for (c = 120; c <= 128; c++)
    {
        printf("%#04x    ", c);
        if (ft_isascii(c))
            printf("The character is %c\n", c);
        else
            printf("Cannot be represented by an ASCII character\n");
    }
    return 0;
}
