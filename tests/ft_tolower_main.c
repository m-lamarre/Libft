/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:07:43 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 14:58:45 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	int i = 0;
	char str[] = "CHANGE THE CASE\n";
	
	while(str[i])
	{
		ft_putchar(ft_tolower(str[i]));
		i++;
	}
	return (0);
}
