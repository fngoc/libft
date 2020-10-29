#include <stdlib.h>

/*
** ft_memcpy: memcpy копирует n байтов первого блока памяти,
** на который ссылается указатель src, во второй блок памяти,
** на который ссылается указатель dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dst);
}
