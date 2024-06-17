/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:12:45 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/11 10:34:16 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_return;
	int		i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	to_return = (char *)malloc(sizeof(*s) * (len + 1));
	if (to_return == NULL)
		return (NULL);
	i = 0;
	while (len > 0 && s[start] != '\0')
	{
		to_return[i] = s[start];
		i++;
		start++;
		len--;
	}
	to_return[i] = '\0';
	return (to_return);
}
/*
int main(void)
{
	printf("%s", ft_substr("", 0, 0));
}*/
