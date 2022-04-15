/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 10:22:59 by allopez           #+#    #+#             */
/*   Updated: 2018/09/10 20:58:05 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int			i;
	char		*dest;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
		i++;
	if (!(dest = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*struct1;

	if (!(struct1 = (t_stock_par*)malloc(sizeof(t_stock_par) * ac)))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		struct1[i].size_param = ft_strlen(av[i]);
		struct1[i].str = av[i];
		struct1[i].copy = ft_strdup(av[i]);
		struct1[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	struct1[i].str = 0;
	return (struct1);
}
