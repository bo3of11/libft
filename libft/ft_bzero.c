#include "libft.h"

void	ft_bzero(void *d, size_t n)
{
	size_t	x;
	char	*str;

	x = 0;
	str = (char *)d;
	while (x < n)
	{
		str[x] = 0;
		x++;
	}
}
