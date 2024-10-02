/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:21:03 by nivilca-          #+#    #+#             */
/*   Updated: 2024/09/30 18:50:02 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*s;
	size_t				i;

	if (n == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	return (dest);
}
