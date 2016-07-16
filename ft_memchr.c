/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:45:12 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/13 09:58:52 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	p1;
	char	*p2;

	p1 = (unsigned char)c;
	p2 = (char*)s;
	while (n--)
	{
		if (*p2 == p1)
			return (p2);
		p2++;
	}
	return (0);
}
