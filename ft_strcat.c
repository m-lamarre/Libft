/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:05:14 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 10:51:16 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		h;

	i = 0;
	h = 0;
	while (s1[i])
		i++;
	while (s2[h])
	{
		s1[i] = s2[h];
		i++;
		h++;
	}
	s1[i] = '\0';
	return (s1);
}