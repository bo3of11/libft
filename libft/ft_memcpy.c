#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    char    *d_bytes;
    char    *s_bytes;
    size_t  i;

    i = 0;
    d_bytes = (char *)dest;
    s_bytes = (char *)src;
    if (dest = src)
        return (dest);
    while (i < n)
    {
        d_bytes[i] = s_bytes[i];
        i++;
    }
    return (dest);
}
