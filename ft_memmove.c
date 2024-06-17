/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:39:56 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 13:15:22 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src && !dst)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}
/*
int main(void)
{
	const char src[] = "lorem ipsum dolor sit amet";
	char *dst;

	dst = src + 1;
	ft_memmove(dst, "consectetur", 5);
	printf("%s", dst);
}*/
