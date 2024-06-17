/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:20:47 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 11:24:49 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*to_return;
	int		i;
	int		j;

	to_return = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (to_return == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		to_return[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		to_return[j] = s2[i];
		i++;
		j++;
	}
	to_return[j] = '\0';
	return (to_return);
}
/*
int main(void)
{
	printf("%s", ft_strjoin("Hola ", "que tal"));
}*/
