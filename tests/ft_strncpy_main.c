/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:45:28 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 15:01:48 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t	i;
    
    i = 0;
    while (src[i] != '\0' && i <= len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

int main()
{
    char src[20];
    char dst[20];
    
    memset(dst, '\0', sizeof(dst));
    strcpy(src, "This is the string.");
    ft_strncpy(dst, src, 20);
    
    printf("Final copied string: %s\n", dst);
    
    return(0);
}
