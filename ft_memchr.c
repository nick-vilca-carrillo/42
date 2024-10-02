/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:48:14 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/02 19:00:19 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *ptr;

	i = 0;
	ptr = (const unsigned char *) s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (void *)(ptr + i);
		i++;
	}
	return (NULL);
}
