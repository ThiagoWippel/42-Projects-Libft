/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twippel- <twippel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:04:18 by twippel-          #+#    #+#             */
/*   Updated: 2025/07/24 18:19:07 by twippel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	void	*ptr;

	len = ft_strlen(str) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, len);
	return (ptr);
}
