/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:03:50 by allopez           #+#    #+#             */
/*   Updated: 2018/09/16 16:12:57 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

char	ft_display00(int x, int y, int a, int b)
{
	if (a == 1 && b == 1)
		return ('o');
	else if (a == x && b == 1)
		return ('o');
	else if (a == 1 && b == y)
		return ('o');
	else if (a == x && b == y)
		return ('o');
	else if (b == 1 || b == y)
		return ('-');
	else if (a == 1 || a == x)
		return ('|');
	else
		return (' ');
}

char	*rush00(int x, int y)
{
	int		a;
	int		b;
	char	*str;
	int		i;

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
				str[i++] = ft_display00(x, y, a, b);
				a++;
			}
			str[i++] = ('\n');
			b++;
		}
		str[i] = '\0';
	}
	return (str);
}
