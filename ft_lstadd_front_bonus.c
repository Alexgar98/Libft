/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:45:01 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 10:58:50 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int main(void)
{
	t_list *prueba = ft_lstnew("Hola que tal");
	t_list *prueba2 = ft_lstnew("Soy una pruebita");
	ft_lstadd_front(&prueba, prueba2);
	printf("%s\n", prueba2 -> content);
	printf("%s", (prueba2 -> next) -> content);
}*/
