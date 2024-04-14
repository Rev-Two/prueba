/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:18:04 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/13 18:42:32 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			j;
	size_t			i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (n == '\0')
		return (0);
	i = 0;
	while ((ss1[i] == ss2[i] && ss1[i] != '\0') && i < n)
		i++;
	if (i == n)
		i--;
	j = ss1[i] - ss2[i];
	return (j);
}
