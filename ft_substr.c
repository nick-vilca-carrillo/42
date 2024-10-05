/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:12:33 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/05 12:03:06 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	actual_len;
	char	*sub;

	s_len = ft_strlen(s);
	actual_len = s_len - start;
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len < actual_len)
		actual_len = len;
	sub = (char *)malloc(actual_len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, actual_len + 1);
	sub[actual_len] = '\0';
	return (sub);
}
