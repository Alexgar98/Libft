/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:17:55 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 10:54:01 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*to_return;

	to_return = malloc(sizeof(t_list));
	if (!to_return)
		return (NULL);
	to_return -> content = content;
	to_return -> next = NULL;
	return (to_return);
}
/*
int main(void)
{
	t_list *prueba = ft_lstnew("Hola que tal");
	printf("%s", prueba -> content);
}*/
