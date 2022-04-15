/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:37:40 by allopez           #+#    #+#             */
/*   Updated: 2018/09/19 15:59:31 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_display_file(char *file)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		r;

	fd = open(file, O_RDONLY);
	{
		while ((r = read(fd, buf, BUF_SIZE)))
		{
			buf[r] = '\0';
			ft_putstr(buf);
		}
	}
	if ((r = close(fd)) == -1)
		return ;
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 2)
	{
		ft_putstr_error("Too many arguments.\n");
		return (0);
	}
	if (ac == 1)
	{
		ft_putstr_error("File name missing.\n");
		return (0);
	}
	while (i <= ac - 1)
	{
		ft_display_file(av[1]);
		i++;
	}
}
