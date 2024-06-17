/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:31:10 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 09:47:00 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(ft_strlen(s1) + 1);
	if (copy == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = ((char *)s1)[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main(void)
{
	char *prueba = ft_strdup("Hola que tal");
	printf("%s", prueba);
}*/
