/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:05:01 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 16:29:52 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
    char		*str1;
    const char	*str2;
    char		var[n];
    size_t		i;
    
    i = 0;
    str1 = (char *)s1;
    str2 = (const char *)s2;
    while (i < n)
    {
        var[i] = str2[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        str1[i] = var[i];
        i++;
    }
    return (s1);
}

int main ()
{
    char dest[] = "Old string";
    const char src[]  = "New string";
    
    printf("Before ft_memmove, dst = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, 10);
    printf("After ft_memmove, dst = %s, src = %s\n", dest, src);
    
    return(0);
}
