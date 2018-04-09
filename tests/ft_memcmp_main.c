/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:04:15 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/10 11:50:26 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char	*string1;
    unsigned char	*string2;
    size_t			i;
    
    string1 = (unsigned char *)s1;
    string2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (string1[i] != string2[i])
            return (string1[i] - string2[i]);
        else
            i++;
    }
    return (0);
}

int main ()
{
    char s1[20];
    char s2[20];
    int ret;
    
    memcpy(s1, "ABCDEF", 6);
    memcpy(s2, "ABCEFG", 6);
    
    ret = ft_memcmp(s1, s2, 5);
    
    if(ret > 0)
    {
        printf("s2 is less than s1\n");
    }
    else if(ret < 0)
    {
        printf("s1 is less than s2\n");
    }
    else 
    {
        printf("s1 is equal to s2\n");
    }
    
    return(0);
}