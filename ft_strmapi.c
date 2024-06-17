/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:56:45 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/04 12:27:52 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*to_return;

	i = 0;
	to_return = malloc(ft_strlen(s) + 1);
	if (to_return == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		to_return[i] = f(i, s[i]);
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
/*
char	prueba(unsigned int i, char c)
{
	char	to_return;

	if (i >= 0 && c != ' ')
		to_return = c + 4;
	else
		to_return = c;
	return(to_return);
}

int main(void)
{
	char src[] = "Hola que tal";
	char *dest = ft_strmapi(src, *prueba);
	printf("%s", dest);
}*/
