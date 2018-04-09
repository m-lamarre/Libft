/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:06:27 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/10 15:24:31 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
    int	i;
    
    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

int main()
{
    char src[40];
    char dst[100];
    
    memset(dst, '\0', sizeof(dst));
    ft_strcpy(src, "This is the copied string");
    ft_strcpy(dst, src);
    
    printf("Final output: %s\n", dst);
    
    return(0);
}
