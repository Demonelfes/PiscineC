/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:31:45 by allopez           #+#    #+#             */
/*   Updated: 2018/09/07 01:38:33 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		in_charset(char *charset, char c)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		c_w(char *str, char *charset)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (in_charset(charset, str[i]))
			i++;
		if (str[i])
			words++;
		while (str[i] && !in_charset(charset, str[i]))
			i++;
	}
	return (words);
}

int		w_l(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i] && !in_charset(charset, str[i]))
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**t;

	i = 0;
	k = 0;
	if (!(t = (char**)malloc(sizeof(char*) * (c_w(str, charset) + 1))))
		return (0);
	while (str[i])
	{
		while (in_charset(charset, str[i]))
			i++;
		if (str[i])
		{
			if (!(t[k] = (char*)malloc(sizeof(char) * (w_l(str + i, charset)))))
				return (0);
			j = 0;
			while (str[i] && !in_charset(charset, str[i]))
				t[k][j++] = str[i++];
			t[k++][j] = '\0';
		}
	}
	t[k] = 0;
	return (t);
}
