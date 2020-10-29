#include <stdlib.h>

/*
** ft_memccpy: копирует данные из массива, на который
** указывает аргумент src, в массив, на который указывает
** аргумент dst пока не встретится символ c, или пока не
** будет скопировано n байт данных.
*/

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			return (NULL);
		}
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dst);
}
