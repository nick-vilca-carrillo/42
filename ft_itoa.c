/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:29:13 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/05 14:29:14 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  num_lenght(int n)
{
    int  length;

    length = 0;
    if (n < 0)
    {
        length = 1;
        n = -n;
    }
    while (n > 0)
    {
        n /= 10;
        lenght++;
    }
    return lenght;
}
void  convert(char *str, int n, int lenght)
{   
    int  i;

    i = lenght - 1;
    str[lenght] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    else if (n == 0)
    {
        str[0] = '0';
        return;
    }
    while (n > 0)
    {  
        str[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }
}
char  *ft_itoa(int n)
{
  int  length;
  char  *str;

  length = num_length(n);
  str = (char *)malloc(length + 1);
  if (!str)
    return (NULL);
  convert (str, n, length);
  return str;
}
