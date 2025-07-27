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
