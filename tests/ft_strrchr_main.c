/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:54:42 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/13 09:17:12 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c && i >= 0)
		i--;
	if (s[i] != (char)c)
		return (0);
	return ((char *)s + i);
}

int main ()
{
   int len;
   const char s[] = "How are you?";
   const char c = 'r';
   char *ret;

   ret = ft_strrchr(s, c);

	 printf("The sentence is |%s|\n\n", s);
   printf("The last occurence of |%c| appears after |%s|\n", c, ret);

   return(0);
}
