/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:20:05 by arevilla          #+#    #+#             */
/*   Updated: 2024/03/30 21:02:08 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_lists(char const *s, char c)
{
	size_t	count;
	size_t	stop;

	stop = 0;
	count = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			stop = 0;
		else if (stop == 0)
		{
			stop = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_matrix(const char **matrix, size_t len_matrix)
{
	while (len_matrix--)
	{
		free((void **)matrix[len_matrix]);
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	len;
	size_t	i;
	size_t	part;

	i = 0;
	part = 0;
	len = ft_lists(s, c);
	matrix = (char **)malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		part = ft_words((const char *)s, c);
		matrix[i] = (char *)malloc(sizeof(char) * part + 1);
		if (!matrix[i])
			return (ft_free_matrix((const char **)matrix, i));
		ft_strlcpy(matrix[i], s, part + 1);
		s = (ft_strchr(s, (int)c));
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}
/*
#include <stdio.h>
int main(void)
{
    const char *texto = "Juan,Pedro,Fulanito";
    char **resultado = ft_split(texto, ',');

    if (resultado)
    {
        while(resultado[i])
        {
            printf("Palabra %zu: %s\n", i + 1, resultado[i]);
            free(resultado[i]); // Liberar memoria de cada palabra
			i++;
        }
        free(resultado); // Liberar memoria de la matriz
    }
    else
    {
        printf("Error al dividir el texto.\n");
    }

    return 0;
}*/
