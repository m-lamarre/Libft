/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 15:48:09 by mlamarre          #+#    #+#             */
/*   Updated: 2016/10/30 15:51:39 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	char	tmp;

	s1 = (char *)s;
	tmp = (unsigned char)c;
	while (n--)
	{
		if (*s1 == tmp)
			return (s1);
		s1++;
	}
	return (0);
}
