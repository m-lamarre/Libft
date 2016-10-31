/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 15:59:20 by mlamarre          #+#    #+#             */
/*   Updated: 2016/10/30 15:59:31 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t i;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (s1);
	if (s2 < s1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)s1)[i] = ((char *)s2)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)s1)[i] = ((char *)s2)[i];
			i++;
		}
	}
	return (s1);
}
