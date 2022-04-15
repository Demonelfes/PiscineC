/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 00:09:46 by allopez           #+#    #+#             */
/*   Updated: 2018/08/31 00:30:24 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int x, int y, int a, int b)
{
	if (a == 1 && b == 1)
		ft_putchar('/');
	else if (a == x && b == 1)
		ft_putchar('\\');
	else if (a == 1 && b == y)
		ft_putchar('\\');
	else if (a == x && b == y)
		ft_putchar('/');
	else if (b == 1 || b == y)
		ft_putchar('*');
	else if (a == 1 || a == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int a;
	int b;

	if (!(x <= 0 || y <= 0))
	{
		b = 1;
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{
				ft_display(x, y, a, b);
				a++;
			}
			ft_putchar('\n');
			b++;
		}
	}
}
