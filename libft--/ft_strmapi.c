/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:22:51 by arevilla          #+#    #+#             */
/*   Updated: 2024/03/30 15:44:44 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
char	memset_number(unsigned int tester, char c)
{
	if (c >= '0' && c <= '9')
	{
		c = '-';
		return c;
	}
	else
		return c;
}
char	to_uppercase(unsigned int tester, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return c;
	}
	else
		return c;
}

int	main(void)
{
	const char *input_string = "123445Hola_mundo";
	char *result;

	result = ft_strmapi(input_string, memset_number);

	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al asignar memoria.\n");
	}
	return 0;
}*/
