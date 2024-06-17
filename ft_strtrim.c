/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:29:51 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/12 09:50:32 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*to_return;
	size_t		start;
	size_t		end;

	to_return = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && start < end)
			end--;
		to_return = malloc (sizeof(char) * (end - start + 1));
		if (to_return)
			ft_strlcpy(to_return, &s1[start], end - start + 1);
	}
	return (to_return);
}
/*
int main (void)
{
	printf("%s", ft_strtrim("           ", " "));
}*/
