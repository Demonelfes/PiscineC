/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 00:09:46 by allopez           #+#    #+#             */
/*   Updated: 2018/09/16 14:08:19 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

char	ft_display01(int x, int y, int a, int b)
{
	if (a == 1 && b == 1)
		return ('/');
	else if (a == x && b == 1)
		return ('\\');
	else if (a == 1 && b == y)
		return ('\\');
	else if (a == x && b == y)
		return ('/');
	else if (b == 1 || b == y)
		return ('*');
	else if (a == 1 || a == x)
		return ('*');
	else
		return (' ');
}

char	*rush01(int x, int y)
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
				str[i++] = ft_display01(x, y, a, b);
				a++;
			}
			str[i++] = ('\n');
			b++;
		}
		str[i] = '\0';
	}
	return (str);
}
