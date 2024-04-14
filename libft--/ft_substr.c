/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:10:57 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/02 13:05:46 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *original_string = "Hello, world! This is a test string.";
    unsigned int start_index = 7;
    size_t substring_length = 12;

    char *result = ft_substr(original_string, start_index, substring_length);
    if (result)
    {
        printf("Substring: %s\n", result);
        free(result); // No olvides liberar la memoria asignada
    }
    else
    {
        printf("Error al crear la subcadena.\n");
    }

    return 0;
}
*/
