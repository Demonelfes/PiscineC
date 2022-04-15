/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 16:06:33 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 10:43:54 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		count;
	int		count2;

	i = 0;
	count = 0;
	count2 = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			count++;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			count2++;
		i++;
	}
	if (count != 0 && count2 != 0)
		return (0);
	return (1);
}
