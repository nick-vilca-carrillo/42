/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivilca- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:11:32 by nivilca-          #+#    #+#             */
/*   Updated: 2024/10/05 14:32:08 by nivilca-         ###   ########.fr       */
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

char	*duplic(const char *start, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free(char **result, int i)
{
	while (i >= 0)
	{
		free (result[i]);
		i--;
	}
}
char *extract_word(const char **s, char c, int *len)
{
    const char *start;
    *len = 0;

    // Saltar los delimitadores
    while (**s == c && **s)
        (*s)++;

    // Si hay una palabra, encontrar su longitud
    if (**s)
    {
        start = *s; // Guardar el inicio de la palabra
        while ((*s)[*len] && (*s)[*len] != c)
            (*len)++;
        
        return duplic(start, *len); // Extraer la palabra
    }
    return NULL; // No hay más palabras
}

char **ft_split(char const *s, char c)
{
    int word_count;      // Número de palabras
    char **result;       // Array de strings a devolver
    int i;               // Índice para el array de strings
    int len;             // Longitud de cada palabra

    word_count = count(s, c);  // Contar las palabras
    if (!s)                    // Comprobar si la cadena de entrada es nula
        return (NULL);
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;  // Inicializar el índice
    while (*s)
    {
        result[i] = extract_word(&s, c, &len);  // Extraer la palabra
        if (!result[i])  // Si falla, liberar memoria
        {
            free_memory(result, i);
            return (NULL);
        }
        if (*s) // Mover el puntero al final de la palabra
        {
            s += len;
            i++;
        }
    }
    result[i] = NULL;  // Terminar el array con NULL
    return (result);
}



