/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:45:28 by mlamarre          #+#    #+#             */
/*   Updated: 2016/06/05 15:48:14 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*a;

	if (!s || !f)
		return (NULL);
	a = ft_strdup(s);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		a[i] = f(a[i]);
		i++;
	}
	return (a);
}
