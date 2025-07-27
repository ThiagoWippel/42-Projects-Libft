#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptrdest;
	unsigned const char	*ptrsrc;

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
