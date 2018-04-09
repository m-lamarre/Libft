/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:07:02 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 15:23:54 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int main ()
{
    char s1[50], s2[50];

    strcpy(s1, "First String");
    strcpy(s2, "Second String");

    ft_strncat(s2, s1, 5);

    printf("Final concatenated string : |%s| \n", s2);

    return(0);
}
