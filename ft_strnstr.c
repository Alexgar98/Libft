/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:05:27 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/11 13:18:57 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	length;
	size_t	h;
	size_t	n;

	length = ft_strlen(needle);
	if (needle[0] == '\0' || needle == haystack)
		return ((char *)haystack);
	if (length > ft_strlen(haystack) || len < length)
		return (NULL);
	h = 0;
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (NULL);
}
/*
int main(void)
{
	printf("%s", ft_strnstr("aaxx", "xx", 3));
}*/
