/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:56:04 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 11:55:18 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	if (!lst)
		return ;
	f(lst -> content);
	aux = lst -> next;
	while (aux)
	{
		f(aux -> content);
		aux = aux -> next;
	}
}
/*
void	prueba(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *pruebita = ft_lstnew("Hola que tal");
	ft_lstiter(pruebita, prueba);
}*/
