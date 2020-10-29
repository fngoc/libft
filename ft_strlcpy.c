#include <stdio.h>

/*
** ft_strlcpy:
*/

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	char *d = dst;
	const char *s = src;
	size_t n = size;
	
	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}
	if (n == 0) {
		if (size != 0)
			*d = '\0';
		while (*s++);
	}
	return(s - src - 1);
}
