#include <stdlib.h>

/*
** ft_memcmp:
*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char * tmp1;
    const unsigned char * tmp2;

    tmp1 = s1;
    tmp2 = s2;
    while (n-- != 0)
    {
        if (*tmp1++ == *tmp2++)
            continue ;
        else if (*tmp1++ > *tmp2++)
            return (1);
        else
            return (-1);
    }
    return (0);
}
