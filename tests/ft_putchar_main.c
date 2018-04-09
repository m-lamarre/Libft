/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:45:28 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 17:02:24 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}


int main ()
{
    char c;
    
    for(c = 'M' ; c <= 'Z' ; c++)
    {
        ft_putchar(c);
    }
    
    return(0);
}
