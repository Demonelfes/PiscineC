/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:12:16 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 15:38:03 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*link;

	link = ft_create_elem(data);
	if ((*begin_list))
		link->next = *begin_list;
	else
		*begin_list = ft_create_elem(data);
	*begin_list = link;
}
