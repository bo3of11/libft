
#include "libft.h"
// #include <stdio.h>


void	*ft_memset(void *d, int v, size_t n)
{
	size_t	x;
	char	*str;

	x = 0;
	str = d;
	while (x < n)
	{
		str[x] = v;
		x++;
	}
	return (d);
}

// int	main ()
// {
// 	char	l[16];

// 	ft_memset(l, 'A', sizeof(l));
// 	printf("%s", l);

// 	return (0);
// }
// int main ( int argc, char *argv[])
//   {
//     char arr1[5] = { 3, 4, 0, 0, 0};
//     char arr2[] = { 1, 2} ;
//     ft_memset(arr1, 1, 5 * sizeof(char));
//     printf("%d\n%d\n%d\n%d\n%d\n", arr1[0],arr1[1], arr1[2], arr1[3], arr1[4]);
//     return (0);
//   }