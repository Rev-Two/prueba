/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:06:36 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/06 13:20:16 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd < 0)
		return ;
	while (*s != '\0')
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}
/*
int main()
{
	char *s = "hola";
	int file = 1;

	ft_putendl_fd(s, file);
	return 0;
}*/
