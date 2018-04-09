/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:06:11 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/10 15:22:45 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
    char	a;

    a = c;
    while (*s != a)
    {
        if (*s == '\0')
            return (0);
        s++;
    }
    return (char *)s;
}

int main ()
{
    const char s[] = "How are you?";
    const char c = 'r';
    char *ret;

    ret = ft_strchr(s, c);

    printf("The sentence is |%s|\n\n", s);
    printf("The |%c| character appears in the string after |%s|\n", c, ret);

    return(0);
}
