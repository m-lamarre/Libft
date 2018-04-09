/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:45:12 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 14:41:55 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int main ()
{
    const char s[] = "How are you?";
    const char c = 'r';
    char *ret;

    ret = ft_memchr(s, c, strlen(s));

		printf("The sentence is |%s|\n\n", s);
    printf("The |%c| appears after |%s|\n", c, ret);

    return(0);
}
