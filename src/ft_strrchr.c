/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twippel- <twippel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:31:00 by twippel-          #+#    #+#             */
/*   Updated: 2025/07/22 20:39:16 by twippel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (1)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
