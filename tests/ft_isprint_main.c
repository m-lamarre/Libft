/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:40:12 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/13 09:57:26 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int main()
{
    int var1 = 'M';
    int var2 = '@';
    int var3 = ' ';
    int var4 = '\t';
    
    if( ft_isprint(var1) )
    {
        printf("var1 = |%c| is a printable character\n", var1 );
    }
    else
    {
        printf("var1 = |%c| is not a printable character\n", var1 );
    }
    
    if( ft_isprint(var2) )
    {
        printf("var2 = |%c| is a printable character\n", var2 );
    }
    else
    {
        printf("var2 = |%c| is not a printable character\n", var2 );
    }
    
    if( ft_isprint(var3) )
    {
        printf("var3 = |%c| is a printable character\n", var3 );
    }
    else
    {
        printf("var3 = |%c| is not a printable character\n", var3 );
    }
    
    if( ft_isprint(var4) )
    {
        printf("var4 = |%c| is a printable character\n", var4 );
    }
    else
    {
        printf("var4 = |%c| is not a printable character\n", var4 );
    }
    
    return(0);
}