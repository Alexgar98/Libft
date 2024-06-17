/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:01:47 by alexigar          #+#    #+#             */
/*   Updated: 2023/11/30 09:49:37 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}
/*
void prueba(unsigned int i, char *str)
{
	if (*str != ' ')
	{
		if (i % 2 == 0)
			*str = *str + 1;
		else
			*str = *str - 1;
	}
}

int main(void)
{
	char prueba_str[] = "Hola que tal";
	printf("%s\n", prueba_str);
	ft_striteri(prueba_str, prueba);
	printf("%s\n", prueba_str);
}*/
