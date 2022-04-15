/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 01:09:14 by allopez           #+#    #+#             */
/*   Updated: 2018/08/31 01:14:34 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		main(int ac, char **av)
{
	int		x;

	x = 1;
	while (x <= ac - 1)
	{
		ft_putstr(av[x]);
		ft_putchar('\n');
		x++;
	}
	return (0);
}
