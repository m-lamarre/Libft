/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:07:33 by mlamarre          #+#    #+#             */
/*   Updated: 2016/05/15 09:53:02 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while (big[i] != '\0')
    {
        while (big[i + k] == little[k])
        {
            k++;
            if (little[k] == '\0')
            {
                return ((char *)little);
            }
        }
        i++;
    }
	return (0);
}

int main()
{
   const char big[25] = "Whereisthelittleword";
   const char little[10] = "little";
   char *ret;

   ret = strstr(big, little);

   printf("The substring is: %s\n", ret);

   return(0);
}
