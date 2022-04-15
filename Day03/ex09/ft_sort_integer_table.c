/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 22:50:55 by allopez           #+#    #+#             */
/*   Updated: 2018/08/29 01:02:01 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		x;
	int		z;
	int		is_sorted;

	x = size - 1;
	while (x > 0)
	{
		is_sorted = 1;
		z = 0;
		while (z < x)
		{
			if (tab[z + 1] < tab[z])
			{
				ft_swap(&tab[z + 1], &tab[z]);
				is_sorted = 0;
			}
			z++;
		}
		if (is_sorted)
			break ;
		x--;
	}
}
