/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:13:21 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/13 20:23:38 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	end;
	size_t	start;

	if (!s1 || !set)
	{
		return (NULL);
	}
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	const char *palabra = "kkkkkkkkxdekkkk";
	const char *busca = "k";
	char *campe = ft_strtrim(palabra, busca);
	if (campe)
	{
		printf("esto es: %s\n", campe);
		free(campe);
	}
	else
	{
		printf("error");
	}
	return 0;
}*/
