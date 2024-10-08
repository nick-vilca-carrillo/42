/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:29:29 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/05 14:29:31 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char  *ft_strmapi(const char *s, char(*f)(unsigned int, char))
{
  unsigned int  i;
  size_t        len;
  char          *new_str;

  i = 0;
  len = ft_strlen(s);
  new_str = (char *)malloc(len + 1);
  if (!new_str)
    return (NULL);
  while (i < len)
  {
      new_str[i] = f(i, s[i]);
      i++;
  }
  new_str = '\0';
  return new_str;
}
  
