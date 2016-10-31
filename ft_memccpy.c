/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 14:02:28 by mlamarre          #+#    #+#             */
/*   Updated: 2016/10/31 10:35:42 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	int					i;

	s1 = dst;
	s2 = src;
	i = 0;
	while (n > 0)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c)
			return (s1 + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
