/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:24:48 by arevilla          #+#    #+#             */
/*   Updated: 2024/03/27 12:13:06 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	int		len;

	if (!(s1 && s2))
		return (0);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (0);
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    const char *original = "Hello";
    const char *completa = " estacion metro";

    char *result = ft_strjoin(original, completa);
    if (result)
    {
        printf("Substring: %s\n", result);
        free(result); // No olvides liberar la memoria asignada
    }
    else
    {
        printf("Error al crear la subcadena.\n");
    }

    return (0);
}*/
