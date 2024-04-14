/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 09:33:23 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/13 20:42:26 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < destsize && dest[i])
		i++;
	while ((i + j + 1) < destsize && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != destsize)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
