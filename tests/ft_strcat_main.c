/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:05:14 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/11 09:55:56 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
    int		i;
    int		h;
    
    i = 0;
    h = 0;
    while (s1[i])
        i++;
    while (s2[h])
    {
        s1[i] = s2[h];
        i++;
        h++;
    }
    s1[i] = '\0';
    return (s1);
}

int main ()
{
    char s1[50], s2[50];
    
    strcpy(s1, "First String");
    strcpy(s2, "Second String");
    
    ft_strcat(s2, s1);
    
    printf("Final concatenated string : |%s| \n", s2);
    
    return(0);
}