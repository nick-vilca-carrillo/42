/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:03:23 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/02 18:19:43 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return (char *)big;

	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0' && (i + j) < len && big[i + j] == little[j])
			{
				j++;
			}
			if (little[j] == '\0')
				return (char *)(big + 1);
		}
		i++;
	}
	return (NULL);
}
				
