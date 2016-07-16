/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:07:02 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/11 09:56:51 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*a;

	a = s1;
	while (*a != '\0')
		a++;
	while (*s2 != '\0' && n > 0)
	{
		*a = *s2;
		a++;
		s2++;
		n--;
	}
	*a = '\0';
	return (s1);
}
