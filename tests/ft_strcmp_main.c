/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:06:19 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 15:55:10 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
            return (0);
        s1++;
        s2++;
    }
    if (s1 < s2)
        return (-1);
    else
        return (1);
}

int main ()
{
    char s1[20];
    char s2[20];
    int ret;
    
    
    strcpy(s1, "String");
    strcpy(s2, "String");
    
    ret = ft_strcmp(s1, s2);
    
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
        printf("s1 is equal to s2\n");
    }
    
    return(0);
}

