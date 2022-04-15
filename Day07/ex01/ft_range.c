/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:22:23 by allopez           #+#    #+#             */
/*   Updated: 2018/09/07 15:11:51 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}
