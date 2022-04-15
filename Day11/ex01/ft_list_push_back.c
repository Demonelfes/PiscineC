/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:53:22 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 15:19:19 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if (((*begin_list)->next))
			ft_list_push_back(&((*begin_list)->next), data);
		else
			((*begin_list)->next) = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}
