/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:07:50 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 14:57:59 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	int i = 0;
	char str[] = "change the case\n";
	
	while(str[i])
	{
		ft_putchar (ft_toupper(str[i]));
		i++;
	}
	return (0);
}
