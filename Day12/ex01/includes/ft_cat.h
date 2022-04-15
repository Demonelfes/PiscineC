/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:05:42 by allopez           #+#    #+#             */
/*   Updated: 2018/09/19 21:32:47 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# define BUF_SIZE 2048

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_putchar_error(char c);
void	ft_putstr(char *str);
void	ft_putstr_error(char *str);
int		ft_strcmp(char *s1, char*s2);

#endif
