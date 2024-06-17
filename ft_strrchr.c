/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:21:57 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/11 12:11:10 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	character;

	i = ft_strlen(s);
	character = c;
	if (character == 0)
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == character)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int main(void)
{
	printf("%s\n", strrchr("", '\0'));
	printf("%s", ft_strrchr("", '\0'));
}*/
