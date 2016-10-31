/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:15:22 by mlamarre          #+#    #+#             */
/*   Updated: 2016/10/31 10:24:09 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	n;
	char	*str;

	i = 0;
	n = ft_strlen(s);
	while (ft_iswhitespace(s[i]))
		i++;
	while (ft_iswhitespace(s[n - 1]))
		n--;
	if (n < i)
		n = i;
	str = ft_strnew(n - i);
	if (str == NULL)
		return (NULL);
	return (ft_strncpy(str, s + i, n - i));
}
