/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:34:34 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 02:50:23 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab_ret;

	i = 0;
	if (!(tab_ret = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		tab_ret[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_ret);
}
