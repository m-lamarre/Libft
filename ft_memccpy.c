/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:42:12 by mlamarre          #+#    #+#             */
/*   Updated: 2016/06/05 15:10:59 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	int					i;

	i = 0;
	s1 = dst;
	s2 = src;
	while (n > 0)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c)
			return (s1 + 1 + i);
		i++;
		n--;
	}
	return (NULL);
}
