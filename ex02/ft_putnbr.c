/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:28:45 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/27 13:41:04 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	digit;

	digit = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
	return ;
}
/*
int	main(void)
{
	ft_putnbr(412);
	write(1, "\n", 1);
	ft_putnbr(-36);
	write(1, "\n", 1);
	ft_putnbr(4);
	write(1, "\n", 1);
	return 0;
}*/
