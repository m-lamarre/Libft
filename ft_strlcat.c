/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:10:51 by mlamarre          #+#    #+#             */
/*   Updated: 2016/10/30 17:10:53 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = ft_strlen(dst);
	len = ft_strlen(src) + n;
	if (size < n)
		return (ft_strlen(src) + size);
	while (src[i] && (size > n + 1))
		dst[n++] = src[i++];
	dst[n] = '\0';
	return (len);
}
