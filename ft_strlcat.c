/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:06:43 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/17 12:58:24 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && *dst && *(dst++))
		i++;
	j = size - i;
	if (!j)
		return (i + ft_strlen(src));
	while (*src)
	{
		if (j != 1)
		{
			*(dst++) = *src;
			j--;
		}
		src++;
		i++;
	}
	*dst = '\0';
	return (i);
}
