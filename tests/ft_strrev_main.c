/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:54:42 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/13 09:17:12 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i > j)
	{
		tmp = str[i];
		str[i]  = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}

int		main (void)
{
	char	str[] = "Reverse this String";

	printf("%s\n", ft_strrev(str));
	return (0);
}
