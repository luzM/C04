/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:41:37 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/27 17:26:42 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	skip_whitespace(char **str)
{
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	(*str)--;
}

int	get_number(char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	get_the_sign(char **str)
{
	int	i;

	i = 0;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			i++;
		(*str)++;
	}
	if (**str < '0' || **str > '9')
		return (0);
	(*str)--;
	return (i);
}

int	ft_atoi(char *str)
{
	int	negative;
	int	result;

	result = 0;
	negative = -1;
	while (*str != '\0')
	{
		if (*str == ' ' || (*str >= 9 && *str <= 13))
			skip_whitespace(&str);
		else if (*str == '-' || *str == '+')
			negative = get_the_sign(&str);
		else if (*str >= '0' && *str <= '9')
		{
			result = get_number(str);
			if (negative > 0 && (negative % 2))
				result = -result;
			return (result);
		}
		else
			return (0);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;

	str = "    			\n42";
	str2 = "dsjn1241mdsnd55241";
	str3 = "+-+-+-+-----+-1212jhbjgj";
	printf("str size  = %d\n", ft_atoi(str));
	printf("str2 size = %d\n", ft_atoi(str2));
	printf("str3 size = %d\n", ft_atoi(str3));
	return (0);
}*/
