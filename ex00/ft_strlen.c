/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:10:42 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/27 13:20:15 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;

	str = "text";
	str2 = " ";
	str3 = "";
	printf("str size  = %d\n", ft_strlen(str));
	printf("str2 size = %d\n", ft_strlen(str2));
	printf("str3 size = %d\n", ft_strlen(str3));
	return (0);
}*/
