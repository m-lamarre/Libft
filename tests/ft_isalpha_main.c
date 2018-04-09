/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:24:48 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/13 10:52:43 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int main()
{
    int var1 = 'A';
    int var2 = '5';
    int var3 = '\t';
    int var4 = '@';
    
    if( ft_isalpha(var1) )
        printf("var1 = |%c| is alphabetic\n", var1 );
    else
        printf("var1 = |%c| is not alphabetic\n", var1 );
    
    if( ft_isalpha(var2) )
        printf("var2 = |%c| is alphabetic\n", var2 );
    else
        printf("var2 = |%c| is not alphabetic\n", var2 );
    
    if( ft_isalpha(var3) )
        printf("var3 = |%c| is alphabetic\n", var3 );
    else
        printf("var3 = |%c| is not alphabetic\n", var3 );
    
    if( ft_isalpha(var4) )
        printf("var4 = |%c| is alphabetic\n", var4 );
    else
        printf("var4 = |%c| is not alphabetic\n", var4 );
    return(0);
}
