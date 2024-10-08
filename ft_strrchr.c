/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:39:04 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/04 17:51:31 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*var_fin;
	char	target;

	var_fin = NULL;
	target = (char)c;
	while (*s != '\0')
	{
		if (*s == target)
			var_fin = (char *)s;
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (var_fin);
}
