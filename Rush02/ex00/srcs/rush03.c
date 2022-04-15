/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 00:21:28 by allopez           #+#    #+#             */
/*   Updated: 2018/09/16 16:13:32 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

char	ft_display03(int x, int y, int a, int b)
{
	if (a == 1 && b == 1)
		return ('A');
	else if (a == x && b == 1)
		return ('C');
	else if (a == 1 && b == y)
		return ('A');
	else if (a == x && b == y)
		return ('C');
	else if (b == 1 || b == y)
		return ('B');
	else if (a == 1 || a == x)
		return ('B');
	else
		return (' ');
}

char	*rush03(int x, int y)
{
	int		a;
	int		b;
	int		i;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * y + 1))))
		return (NULL);
	if (!(x <= 0 || y <= 0))
	{
		i = 0;
		b = 1;
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{
				str[i++] = ft_display03(x, y, a, b);
				a++;
			}
			str[i++] = ('\n');
			b++;
		}
		str[i] = '\0';
	}
	return (str);
}
