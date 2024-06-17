/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:53:23 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/07 09:32:42 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*to_return;
	int		total_size;
	int		i;

	total_size = count * size;
	to_return = malloc(total_size);
	if (to_return == NULL)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((char *)to_return)[i] = '\0';
		i++;
	}
	return (to_return);
}
/*
int main(void)
{
	char *prueba = calloc(10, 2);
	prueba = "patata";
}*/
