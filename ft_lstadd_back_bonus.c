/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:06:25 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 11:20:25 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}
/*
int main(void)
{
	t_list *prueba = ft_lstnew("Hola que tal");
	t_list *prueba2 = ft_lstnew("Soy una pruebita");

	ft_lstadd_back(&prueba, prueba2);
	printf("%s", (prueba -> next) -> content);
}*/
