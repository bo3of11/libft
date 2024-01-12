#include "libft.h"

size_t	ft_strlen (const char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}