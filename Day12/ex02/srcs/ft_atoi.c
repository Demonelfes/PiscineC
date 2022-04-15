/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 17:07:30 by allopez           #+#    #+#             */
/*   Updated: 2018/09/18 12:07:24 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		ft_atoi(char *str)
{
	int		x;
	int		neg;
	int		result;

	x = 0;
	neg = 0;
	result = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == ' ')
		x++;
	if (str[x] == '-')
		neg = 1;
	if (str[x] == '+' || str[x] == '-')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = (str[x] - '0' + result * 10);
		x++;
	}
	return (neg == 1 ? -result : result);
}
