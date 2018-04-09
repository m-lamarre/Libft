/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:04:26 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 16:13:30 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
    size_t	i;
    unsigned char	*s;
    
    i = 0;
    s = (unsigned char *)b;
    while (i < len)
    {
        s[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

int main ()
{
    char b[50];
    
    strcpy(b,"Look at what this function does");
    puts(b);
    
    ft_memset(b,'*',10);
    puts(b);
    
    return(0);
}
