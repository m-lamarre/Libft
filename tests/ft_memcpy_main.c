/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:04:49 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 16:36:33 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char		*s1;
    const char	*s2;
    size_t		i;
    
    i = 0;
    s1 = (char *)dst;
    s2 = (char *)src;
    while (i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    return (s1);
}


int main ()
{
    const char src[50] = "This is a copied string";
    char dst[50];
    
    printf("Before memcpy dst = %s\n", dst);
    ft_memcpy(dst, src, strlen(src)+1);
    printf("After memcpy dst = %s\n", dst);
    
    return(0);
}
