/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:37:43 by allopez           #+#    #+#             */
/*   Updated: 2018/09/04 16:33:57 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check_base(char *base)
{
	int		i;
	int		len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		i = len;
		while (i--)
			if (base[i] == base[len])
				return (0);
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_n;

	base_n = check_base(base);
	if (base_n >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr_base(-1 * (nbr / base_n), base);
			ft_putchar(base[-1 * (nbr % base_n)]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(-nbr, base);
		}
		else if (nbr >= base_n)
		{
			ft_putnbr_base(nbr / base_n, base);
			ft_putnbr_base(nbr % base_n, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
