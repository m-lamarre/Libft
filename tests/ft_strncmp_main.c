/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:07:12 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 15:14:12 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    
    i = 0;
    while (*s1 == *s2 && i <= n)
    {
        if (*s1 == '\0')
            return (0);
        s1++;
        s2++;
        i++;
    }
    if (*(unsigned char *)s1 < *(unsigned char *)s2)
        return (-1);
    else
        return (+1);
}

int main ()
{
    char s1[15];
    char s2[15];
    int ret;
    
    strcpy(s1, "String");
    strcpy(s2, "Str");
    
    ret = ft_strncmp(s1, s2, 6);
    
    if(ret < 0)
    {
        printf("s1 is less than s2\n");
    }
    else if(ret > 0)
    {
        printf("s2 is less than s1\n");
    }
    else 
    {
        printf("s1 is equal to s2");
    }
    
    return(0);
}
