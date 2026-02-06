/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twippel- <twippel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:47:15 by twippel-          #+#    #+#             */
/*   Updated: 2025/07/31 01:27:37 by twippel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
