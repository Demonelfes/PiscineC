/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:26:11 by allopez           #+#    #+#             */
/*   Updated: 2018/09/16 16:12:44 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

char	*read_input(void)
{
	int		r;
	char	buf[BUF_SIZE + 1];
	char	*str;

	if (!(str = (char*)malloc(sizeof(char))))
		return (NULL);
	str[0] = '\0';
	while ((r = read(0, buf, BUF_SIZE)))
	{
		buf[r] = '\0';
		str = ft_strfakecat(str, buf);
		str = ft_strfakecat(str, "\0");
	}
	return (str);
}

int		main(void)
{
	char	*input;

	input = read_input();
	rush_comp(input);
	return (0);
}
