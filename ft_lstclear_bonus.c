/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:35:13 by alexigar          #+#    #+#             */
/*   Updated: 2023/12/18 11:42:09 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*next_elem;

	aux = *lst;
	if (!aux)
		return ;
	while (aux)
	{
		next_elem = aux -> next;
		del(aux -> content);
		free(aux);
		aux = next_elem;
	}
	*lst = NULL;
}
/*
void	delete_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *prueba = ft_lstnew("Si ves este mensaje algo va mal");
	ft_lstclear(&prueba, delete_content);
	printf("%s", prueba -> content);
}*/
