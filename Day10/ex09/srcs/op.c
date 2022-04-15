/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:35:44 by allopez           #+#    #+#             */
/*   Updated: 2018/09/12 23:49:27 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_add(int nbr, int nbr2)
{
	return (nbr + nbr2);
}

int		ft_sub(int nbr, int nbr2)
{
	return (nbr - nbr2);
}

int		ft_mul(int nbr, int nbr2)
{
	return (nbr * nbr2);
}

int		ft_div(int nbr, int nbr2)
{
	return (nbr / nbr2);
}

int		ft_mod(int nbr, int nbr2)
{
	return (nbr % nbr2);
}
