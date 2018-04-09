/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:21:37 by mlamarre          #+#    #+#             */
/*   Updated: 2016/06/17 10:29:05 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
    size_t			i;
    unsigned char	*c;

    i = 0;
    c = (unsigned char *)s;
    while (i < n && n > 0)
    {
        c[i] = 0;
        i++;
    }
}

int main ()
{
    char s[50];

    strcpy(s,"This is a string.");
    puts(s);

    ft_bzero(s,10);
    puts(s);

    return(0);
}
