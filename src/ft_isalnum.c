#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}
