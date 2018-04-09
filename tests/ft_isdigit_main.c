/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 14:30:31 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/13 09:56:52 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int main()
{
    int var1 = '5';
    int var2 = 'M';
    
    if( ft_isdigit(var1) )
    {
        printf("var1 = |%c| is a digit\n", var1 );
    }
    else
    {
        printf("var1 = |%c| is not a digit\n", var1 );
    }
    
    if( ft_isdigit(var2) )
    {
        printf("var2 = |%c| is a digit\n", var2 );
    }
    else
    {
        printf("var2 = |%c| is not a digit\n", var2 );
    }
    
    return(0);
}