/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 22:31:38 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 01:42:36 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		ft_usage(int nbr, int nbr2)
{
	int		i;

	ft_putstr("error : only [ ");
	i = 0;
	while (i < 5)
	{
		ft_putstr(g_opptab[i].opp);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("] are accepted.\n");
	return (nbr || nbr2);
}

int		find_op(char *operand)
{
	int		op;

	op = 0;
	while (op < 5)
	{
		if (ft_strcmp(operand, g_opptab[op].opp) == 0)
			return (op);
		op++;
	}
	return (5);
}

int		main(int ac, char **av)
{
	int		nbr;
	int		nbr2;
	int		op;

	if (ac != 4)
		return (0);
	nbr = ft_atoi(av[1]);
	nbr2 = ft_atoi(av[3]);
	op = find_op(av[2]);
	if (g_opptab[op].operation == &ft_usage)
		return (ft_usage(nbr, nbr2));
	else if (nbr2 == 0 && g_opptab[op].operation == &ft_div)
		return (ft_putstr("Stop : division by zero\n"));
	else if (nbr2 == 0 && g_opptab[op].operation == &ft_mod)
		return (ft_putstr("Stop : modulo by zero\n"));
	else
	{
		ft_putnbr(g_opptab[op].operation(nbr, nbr2));
		ft_putchar('\n');
	}
}
