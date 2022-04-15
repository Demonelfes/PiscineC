/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:45:59 by allopez           #+#    #+#             */
/*   Updated: 2018/09/19 21:35:25 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# define BUF_SIZE 2048

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putchar_error(char c);
void	ft_putstr(char *str);
void	ft_putstr_error(char *str);
void	ft_usage_error();
void	ft_file_error(char *file);
void	ft_offset_error(char *offset);
void	ft_usage_error(void);
int		ft_strcmp(char *s1, char*s2);
int		ft_abs(int nb);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strfakecat(char *s1, char *s2);

#endif
