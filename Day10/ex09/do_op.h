/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:05:34 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 01:41:03 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef	struct	s_opp
{
	char		*opp;
	int			(*operation)(int, int);
}				t_opp;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_putstr(char *str);
int				ft_atoi(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_add(int nbr, int nbr2);
int				ft_sub(int nbr, int nbr2);
int				ft_mul(int nbr, int nbr2);
int				ft_div(int nbr, int nbr2);
int				ft_mod(int nbr, int nbr2);
int				ft_usage(int nbr, int nbr2);

#endif
