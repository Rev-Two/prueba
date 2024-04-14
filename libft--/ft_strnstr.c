/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:47:40 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/13 18:51:32 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == 0)
		return ((char *)str);
	i = ft_strlen(needle);
	while (*str && i <= len--)
	{
		if (!(ft_strncmp((char *)str, (char *)needle, i)))
			return ((char *)str);
		str++;
	}
	return (0);
}
