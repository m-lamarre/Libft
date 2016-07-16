/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:04:49 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 16:46:37 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;
	size_t		i;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
