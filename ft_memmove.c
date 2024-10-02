/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:28:18 by nivilca-          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:24 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*ptr;
	const unsigned char		*s;

	if (n == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (ptr < s)
		return (ft_memcpy(ptr, s, n));
	while (n--)
	{
		ptr[n] = s[n];
	}
	return (dest);
}
