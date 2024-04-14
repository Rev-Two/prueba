/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:17:29 by arevilla          #+#    #+#             */
/*   Updated: 2024/03/28 16:09:23 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static char	*ft_array(char *str_numb, unsigned int numb, long int digits)
{
	while (numb > 0)
	{
		str_numb[digits--] = numb % 10 + '0';
		numb = numb / 10;
	}
	return (str_numb);
}

static long int	ft_digits(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str_numb;
	long int		digits;
	unsigned int	numb;
	int				sign;

	sign = 1;
	digits = ft_digits(n);
	str_numb = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_numb)
		return (NULL);
	str_numb[digits--] = '\0';
	if (n == 0)
		str_numb[0] = '0';
	if (n < 0)
	{
		sign = sign * -1;
		numb = n * -1;
		str_numb[0] = '-';
	}
	else
		numb = n;
	str_numb = ft_array(str_numb, numb, digits);
	return (str_numb);
}
/*
#include <stdio.h>
int main()
{
    int numero = 0;
    char *cadena = ft_itoa(numero);
	printf("esto: %s\n", cadena);
	free(cadena);
}*/
