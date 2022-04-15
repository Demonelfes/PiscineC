/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 10:12:10 by allopez           #+#    #+#             */
/*   Updated: 2018/08/29 01:10:21 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		x;
	int		tmp;

	x = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
	while (x < len - 1)
	{
		tmp = str[len - 1];
		str[len - 1] = str[x];
		str[x] = tmp;
		len--;
		x++;
	}
	return (str);
}
