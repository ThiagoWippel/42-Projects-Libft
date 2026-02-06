/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twippel- <twippel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:22:02 by twippel-          #+#    #+#             */
/*   Updated: 2025/07/30 00:00:55 by twippel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digits(int n)
{
	long	num;
	size_t	digits;

	num = n;
	digits = 1;
	if (n < 0)
	{
		num = -num;
		digits++;
	}
	while (num >= 10)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	num;
	char	*str;
	size_t	digits;

	num = n;
	digits = count_digits(n);
	str = malloc(digits + 1);
	if (!str)
		return (NULL);
	str[digits] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i = digits - 1;
	while (num >= 10)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	str[i] = num + '0';
	return (str);
}
