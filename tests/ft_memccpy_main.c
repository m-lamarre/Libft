/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:42:12 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 12:31:24 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <assert.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char	*s1;
    unsigned char	*s2;
    size_t			i;
    
    i = 0;
    s1 = (unsigned char *)dst;
    s2 = (unsigned char *)src;
    if (s1 == NULL || s2 == NULL)
        return (0);
    while (i < n)
    {
        s1[i] = s2[i];
        if (s1[i] == c)
            return (s1 + i + 1);
        i++;
    }
    return (0);
}

int main()
{
    char dst[8];
    char *src = "Source";
    int c = 5;
    int character = 'o';
    char *p;
    int i;
    
    for (i = 0; i < c; i++)
        dst[i] = '*';
    
    printf("src = %s\n", src);
    p = ft_memccpy(dst, src, character, c);
    assert(p != NULL);
    printf("Character '%c' is found in \"%s\"\n", character, src);
    printf("*p = %c\n", *p);
    
    printf("dst = ");
    for (i = 0; i < c; i++)
        putchar(dst[i]);
    printf("\n");
    
    return 0;
}
