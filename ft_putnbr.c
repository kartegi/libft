/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 13:29:01 by ktennie           #+#    #+#             */
/*   Updated: 2020/07/29 17:58:19 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	void	ft_print(intmax_t n)
{
	if (n > 0)
	{
		ft_print(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void			ft_putnbr(intmax_t n)
{
	char	c;

	c = '\0';
	if (n < 0)
	{
		n = n * -1;
		c = '-';
	}
	if (c == '-')
	{
		ft_putchar('-');
		c = '\0';
	}
	if (n == 0)
		ft_putchar('0');
	if (n > 0)
		ft_print(n);
}
