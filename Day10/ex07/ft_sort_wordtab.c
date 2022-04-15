/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:17:37 by allopez           #+#    #+#             */
/*   Updated: 2018/09/12 16:17:52 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **tab, int i, int j, int swap)
{
	tab[swap] = tab[j];
	tab[j] = tab[i];
	tab[i] = tab[swap];
	tab[swap] = NULL;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		swap;

	i = 0;
	j = 0;
	while (tab[i])
		i++;
	swap = i;
	i--;
	while (i > 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (ft_strcmp(tab[j], tab[i]) > 0)
				ft_swap(tab, j, i, swap);
			j--;
		}
		i--;
	}
}
