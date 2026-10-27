/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:20:46 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/27 13:28:09 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;

	str = "text";
	str2 = "Uppercase Test";
	str3 = "";
	ft_putstr(str);
	ft_putstr(str2);
	ft_putstr(str3);	
	return (0);
}*/
