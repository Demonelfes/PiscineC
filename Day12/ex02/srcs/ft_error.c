/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 13:16:41 by allopez           #+#    #+#             */
/*   Updated: 2018/09/19 15:43:37 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_file_error(char *file)
{
	ft_putstr_error("tail: ");
	ft_putstr_error(file);
	if (errno == EACCES)
		ft_putstr_error(": Permission denied\n");
	else
		ft_putstr_error(": No such file or directory\n");
}

void	ft_offset_error(char *offset)
{
	ft_putstr_error("tail: illegal offset : ");
	ft_putstr_error(offset);
	ft_putstr_error("\n");
}

void	ft_usage_error(void)
{
	ft_putstr_error("tail : option requires an argument -- c\n\
usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n");
}
