/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twippel- <twippel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:53:00 by twippel-          #+#    #+#             */
/*   Updated: 2025/07/31 01:27:56 by twippel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptrdest;
	unsigned const char	*ptrsrc;

	if (n == 0 || dest == src)
		return (dest);
	if (!dest && !src)
		return (dest);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned const char *)src;
	i = 0;
	if (dest > src)
	{
		while (n--)
			ptrdest[n] = ptrsrc[n];
	}
	else
	{
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}
