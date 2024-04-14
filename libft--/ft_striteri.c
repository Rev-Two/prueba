/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:57:55 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/05 14:48:56 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !(*s) || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
/*
#include <stdio.h>
void	print_char(unsigned int tester, char *c)
{
	printf("esto sale en la posicion %u: %c\n", tester, *c);
}

int main()
{
	char *str = "hola mundo new";
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	ft_striteri(str, &print_char);
	printf("esto sale en la posicion %u: ", i);

	return 0;
}*/
