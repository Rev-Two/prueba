/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:13:01 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/13 19:17:10 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*copi;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		size++;
	copi = malloc(size + 1);
	if (copi == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copi[i] = s1[i];
		i++;
	}
	copi[i] = '\0';
	return (copi);
}
