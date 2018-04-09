/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:23:51 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 11:44:04 by mlamarre         ###   ########.fr       */
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

int		ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int main()
{
    int var1 = 'A';
    int var2 = '\t';
    int var3 = '@';
    int var4 = '5';
    
    if( ft_isalnum(var1) )
    {
        printf("var1 = |%c| is alphanumeric\n", var1 );
    }
    else
    {
        printf("var1 = |%c| is not alphanumeric\n", var1 );
    }
    
    if( ft_isalnum(var2) )
    {
        printf("var2 = |%c| is alphanumeric\n", var2 );
    }
    else
    {
        printf("var2 = |%c| is not alphanumeric\n", var2 );
    }
    
    if( ft_isalnum(var3) )
    {
        printf("var3 = |%c| is alphanumeric\n", var3 );
    }
    else
    {
        printf("var3 = |%c| is not alphanumeric\n", var3 );
    }
    
    if( ft_isalnum(var4) )
    {
        printf("var4 = |%c| is alphanumeric\n", var4 );
    }
    else
    {
        printf("var4 = |%c| is not alphanumeric\n", var4 );
    }
    return(0);
}
