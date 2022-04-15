/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:37:40 by allopez           #+#    #+#             */
/*   Updated: 2018/09/20 15:29:33 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_error(char *file)
{
	ft_putstr_error("cat: ");
	ft_putstr_error(file);
	if (errno == EACCES)
		ft_putstr_error(": Permission denied\n");
	else if (errno == EISDIR)
		ft_putstr_error(": Is a directory\n");
	else
		ft_putstr_error(": No such file or directory\n");
}

void	ft_display_standard(void)
{
	char	buf[BUF_SIZE + 1];
	int		r;

	while ((r = read(0, buf, BUF_SIZE)))
	{
		buf[r] = '\0';
		ft_putstr(buf);
	}
}

void	ft_display_file(char *file)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		r;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_error(file);
	else
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

	if (ac == 1)
		ft_display_standard();
	else
	{
		i = 1;
		while (i < ac)
		{
			if (ft_strcmp(av[i], "-") == 0)
				ft_display_standard();
			else
				ft_display_file(av[i]);
			i++;
		}
	}
	return (0);
}
