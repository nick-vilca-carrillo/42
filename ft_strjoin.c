/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:08:29 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/05 12:39:05 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(total_len + 1);
	if (!s3)
		return (NULL);
	s3[0] = '\0';
	ft_strlcat(s3, s1, total_len + 1);
	ft_strlcat(s3, s2, total_len + 1);
	return (s3);
}
