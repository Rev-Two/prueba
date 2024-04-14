/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:56:46 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/12 15:58:52 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
		return (0);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest_ptr < src_ptr)
	{
		while (len--)
			*dest_ptr++ = *src_ptr++;
	}
	else
	{
		dest_ptr = dest_ptr + len;
		src_ptr = src_ptr + len;
		while (len--)
			*(--dest_ptr) = *(--src_ptr);
	}
	return (dest);
}
//Tiene la finalidad de mover bloques de memorias
//Es mas seguro que memcpy
//Tienes que usar unsigned char para crear punteros que apunten a los originales
//src se pone en el carril de dest y empuje toda la string
