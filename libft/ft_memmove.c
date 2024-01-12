#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (s == d)
		return (dest);
	if (s < d)
	{
		while (len > 0)
		{
			*(d + len) = *(s + len);
			len--;
		}
		return (dest);
	}
	else
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dest);
}
