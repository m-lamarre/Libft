/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:45:28 by mlamarre          #+#    #+#             */
/*   Updated: 2016/06/05 15:53:38 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(long n)
{
	size_t i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	long	i;
	size_t	count;
	char	*str;
	char	neg;

	i = n;
	neg = (i < 0 ? 1 : 0);
	count = ft_count(i);
	str = ft_strnew(count + neg);
	if (str == NULL)
		return (NULL);
	if (neg)
	{
		i = -i;
		str[0] = '-';
	}
	while (count > 0)
	{
		str[count + neg - 1] = (i % 10) + '0';
		count--;
		i = i / 10;
	}
	return (str);
}
