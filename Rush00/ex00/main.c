/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 00:26:27 by allopez           #+#    #+#             */
/*   Updated: 2018/09/02 15:53:41 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int		x;
	int		neg;
	int		result;

	x = 0;
	neg = 0;
	result = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == ' ')
		x++;
	if (str[x] == '-')
		neg = 1;
	if (str[x] == '+' || str[x] == '-')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = (str[x] - '0' + result * 10);
		x++;
	}
	if (neg == 1)
		return (-result);
	else
		return (result);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
