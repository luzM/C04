/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:59:23 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/27 17:41:39 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_duplicate(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (0);
		str++;
	}
	return (1);
}

int	base_is_valid(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (!find_duplicate(&base[i + 1], base[i]))
			return (0);
		i++;
	}
	return (1);
}

int	size_of_base(char *base)
{
	int	result;

	result = 0;
	while (*base != '\0')
	{
		result++;
		base++;
	}
	return (result);
}

void	handle_smallest(char *base, size)
{
	long	i;

	i = 2147483648;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	size;

	i = 0;
	if (base_is_valid (base))
		size = size_of_base(base);
	else
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > size)
	{
		ft_putnbr_base(nbr / size, base);
	}
	write(1, &base[nbr % size], 1);
}
