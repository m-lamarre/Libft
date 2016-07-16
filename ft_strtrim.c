/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:45:28 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/10 15:55:58 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	k;
	char	*a;

	i = 0;
	k = ft_strlen(s);
	while (ft_iswhitespace(s[i]))
		i++;
	while (ft_iswhitespace(s[k - 1]))
		k--;
	if (k < i)
		k = i;
	a = ft_strnew(k - i);
	if (a == NULL)
		return (NULL);
	return (ft_strncpy(a, s + i, k - i));
}
