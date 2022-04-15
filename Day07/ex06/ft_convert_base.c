/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:45:17 by allopez           #+#    #+#             */
/*   Updated: 2018/09/07 01:41:44 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		check_base(char *str)
{
	int		len;
	int		i;

	len = 0;
	while (str[len])
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		i = len;
		while (i-- >= 0)
			if (str[i] == str[len])
				return (0);
		len++;
	}
	return (len);
}

int		in_base(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		base_n;
	int		nb;
	int		sign;
	int		i;

	base_n = check_base(base);
	if (base_n < 2)
		return (0);
	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign *= (str[i++] == '-' ? -1 : 1);
	while (in_base(base, str[i]) != -1)
	{
		nb = nb * base_n + in_base(base, str[i]);
		i++;
	}
	return (sign * nb);
}

void	ft_fake_putnbr_base(int nbr, char *base, char **res_new_base, int i)
{
	int		base_n;

	base_n = check_base(base);
	if (base_n >= 2)
	{
		if (nbr < 0)
		{
			res_new_base[0][0] = '-';
			ft_fake_putnbr_base(-nbr, base, res_new_base, 1);
		}
		else if (nbr >= base_n)
		{
			ft_fake_putnbr_base(nbr / base_n, base, res_new_base, i + 1);
			ft_fake_putnbr_base(nbr % base_n, base, res_new_base, i);
		}
		else
			res_new_base[0][i] = base[nbr];
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		number;
	char	*res_new_base;
	int		j;
	char	tmp;

	number = ft_atoi_base(nbr, base_from);
	if (!(res_new_base = (char*)malloc(sizeof(char) * 50)))
		return (0);
	i = 0;
	while (i < 50)
		res_new_base[i++] = 0;
	ft_fake_putnbr_base(number, base_to, &res_new_base, 0);
	i = 0;
	res_new_base += (res_new_base[i] == '-' ? 1 : 0);
	j = 0;
	while (res_new_base[j])
		j++;
	while (i < j / 2)
	{
		tmp = res_new_base[i];
		res_new_base[i] = res_new_base[j - i - 1];
		res_new_base[j - i++ - 1] = tmp;
	}
	return (res_new_base[-1] == '-' ? res_new_base - 1 : res_new_base);
}
