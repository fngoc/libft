#include <stdlib.h>	/* для printf */
#include <stdio.h>	/* для size_t */
#include <string.h>	/* для memset, bzero, memcpy, memccpy */

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int main(void)
{
	/* Исходные массивы */
	unsigned char src1[15] = "1234567890";
	unsigned char dsr1[15] = "1234567890";
	
	unsigned char src2[15] = "1234567890";
	unsigned char dsr2[15] = "1234567890";
	
	unsigned char src3[15] = "1234567890";
	unsigned char dsr3[15] = "";
	
	unsigned char src4[15] = "1234567890";
	unsigned char dsr4[15] = "";
	
	unsigned char src5[15] = "1234567890";
	unsigned char dsr5[15] = "";
	
	unsigned char src6[15] = "1234567890";
	unsigned char dsr6[15] = "";

	/* Работа функций */
	memset(src1, '1', 10);
	ft_memset(dsr1, '1', 10);

	bzero(src2, 3);
	ft_bzero(dsr2, 3);
	
	memcpy(dsr3, src3, 4);
	ft_memcpy(dsr4, src4, 4);

	memccpy(dsr5, src5, '5', 10);
	ft_memccpy(dsr6, src6, '5', 10);

	/* Вывод массивов */
	printf("-------Работа функций--------\n");
	printf("-----------------------------\n");
	printf("memset src1: %s\n", src1);
	printf("ft_memset dsr1: %s\n", dsr1);
	printf("-----------------------------\n");
	printf("bzero src2: %s\n", src2);
	printf("ft_bzero dsr2: %s\n", dsr2);
	printf("-----------------------------\n");
	printf("memcpy dsr3: %s\n", dsr3);
	printf("ft_memcpy dsr4: %s\n", dsr4);
	printf("-----------------------------\n");
	printf("memccpy dsr5: %s\n", dsr5);
	printf("ft_memccpy dsr6: %s\n", dsr6);
	printf("-----------------------------\n");
	return (0);
}
