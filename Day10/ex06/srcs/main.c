/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:54:04 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 10:40:50 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		find_op(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '*')
		return (2);
	else if (op == '/')
		return (3);
	else if (op == '%')
		return (4);
	else
		return (-1);
}

int		ft_is_divmod(int nbr, int op, int nbr2, char **av)
{
	nbr = ft_atoi(av[1]);
	nbr2 = ft_atoi(av[3]);
	op = find_op(*av[2]);
	if (nbr2 == 0 && (op == 3 || op == 4))
	{
		if (op == 3)
			return (ft_putstr("Stop : division by zero\n"));
		else
			return (ft_putstr("Stop : modulo by zero\n"));
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		nbr;
	int		op;
	int		nbr2;
	int		(*calcul[5])(int, int);

	if (ac != 4)
		return (0);
	calcul[0] = ft_add;
	calcul[1] = ft_sub;
	calcul[2] = ft_mul;
	calcul[3] = ft_div;
	calcul[4] = ft_mod;
	nbr = ft_atoi(av[1]);
	nbr2 = ft_atoi(av[3]);
	op = find_op(*av[2]);
	ft_is_divmod(nbr, op, nbr2, av);
	if (op == -1)
		return (ft_putstr("0\n"));
	if (!(nbr2 == 0 && (op == 3 || op == 4)))
	{
		ft_putnbr((*calcul[op])(nbr, nbr2));
		ft_putchar('\n');
	}
	return (0);
}
