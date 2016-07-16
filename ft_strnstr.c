/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:07:23 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/28 13:13:05 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		k;
	int		s;

	if (*little == '\0')
		return ((char *)(big));
	i = 0;
	while (big[i] && len > 0)
	{
		if (len < ft_strlen(little))
			return (NULL);
		k = 0;
		s = i;
		while (big[s] == little[k] && little[k] && big[s])
		{
			k++;
			s++;
		}
		if (little[k] == '\0')
			return ((char *)big + i);
		len--;
		i++;
	}
	return (NULL);
}
