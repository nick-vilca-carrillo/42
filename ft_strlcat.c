/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:23:35 by nivilca-          #+#    #+#             */
/*   Updated: 2024/09/30 20:00:56 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen] != '\0' && destlen < n)
	{
		destlen++;
	}
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (destlen >= n)
		return (n + srclen);
	while (i < srclen && (destlen + i + 1) < n)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
