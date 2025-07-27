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
