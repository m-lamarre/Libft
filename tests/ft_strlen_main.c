/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:06:51 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 15:29:13 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main ()
{
    char s[50];
    int len;
    
    strcpy(s, "This string is very long.");
    
    len = ft_strlen(s);
    printf("The length of '%s' is |%d|\n", s, len);
    
    return(0);
}
