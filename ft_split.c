/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:11:32 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/10 20:07:50 by nivilca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(const char *s, char c)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (*s)
	{
		if (*s != c && index == 0)
		{
			count++;
			index = 1;
		}
		else if (*s == c)
			index = 0;
		s++;
	}
	return (count);
}

void	free_memory(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

char	*extract_word(char const **s, char c)
{
	const char	*start;
	int			lenght;

	start = *s;
	while (**s && **s != c)
		(*s)++;
	lenght = *s - start;
	return (ft_substr(start, 0, lenght));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	result = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = extract_word(&s, c);
			if (!result[i++])
			{
				free_memory(result, i - 1);
				return (NULL);
			}
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
