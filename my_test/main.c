#include <stdlib.h>	/* для printf, atoi, calloc */
#include <stdio.h>	/* для size_t */
#include <ctype.h>	/* для isalnum, isalpha, isdigit, isascii, toupper, tolower */
#include <string.h>	/* для memset, bzero, memcpy, memccpy, memmove, memchar, memcmp, strlen, strncmp, strnstr, strlcpy, strlcat, strdup */

#include "libft.h" /* Библиотека с сделанными функциями  */

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
	
	unsigned char src7[15] = "1234567890";
	unsigned char dsr7[8] = "";
	
	unsigned char src8[15] = "1234567890";
	unsigned char dsr8[8] = "";
    
    unsigned char src9[15] = "1234567890";
    unsigned char dsr9[15] = "1234567890";

    unsigned char src10[15] = "1";
    unsigned char dsr10[15] = "d";
	
	char src11[15] = "12\n";
	
	char src12[15] = "1234567890";
	char dsr12[15] = "1234567890";

	char dsr13[15] = "111239879";
	char src13[15] = "23";

	char dsr14[15] = "111239879";
	char src14[15] = "23";

	char dsr15[15] = "fe";
	char src15[15] = "f";

	/* Работа функций */
	/* ft_memset */
	memset(src1, '1', 10);
	ft_memset(dsr1, '1', 10);

	/* ft_bzero */
	bzero(src2, 3);
	ft_bzero(dsr2, 3);

	/* ft_memcpy */
	memcpy(dsr3, src3, 4);
	ft_memcpy(dsr4, src4, 4);

	/* ft_memccpy */
	memccpy(dsr5, src5, '5', 10);
	ft_memccpy(dsr6, src6, '5', 10);

	/* ft_memmove */
	memmove(dsr7,src7, 8);
	ft_memmove(dsr8,src8, 8);

	/* ft_memchr */
    char *sym1;
    sym1 = memchr(src9, '4', 10);
    if (sym1 != NULL)
       sym1[0]='!';
    char *sym2;
    sym2 = ft_memchr(dsr9, '4', 10);
    if (sym2 != NULL)
       sym2[0]='!';

	/* ft_memcmp */
	int res1 = memcmp(src10, dsr10, 90);
	int res2 = ft_memcmp(src10, dsr10, 90);

	/* ft_strlen */
	int res3 = strlen(src11);
	int res4 = ft_strlen(src11);

	/* ft_strchr */
	char *sym3;
	sym3 = strchr(src12, '\0');
	char *sym4;
	sym4 = ft_strchr(dsr12, '\0');

	/* ft_isalnum */
	int sym5;
	sym5 = isalnum('j');
	int sym6;
	sym6 = ft_isalnum('j');

	/* ft_isalpha */
	int sym7;
	sym7 = isalpha('K');
	int sym8;
	sym8 = ft_isalpha('K');

	/* ft_isdigit */
	int sym9;
	sym9 = isdigit('2');
	int sym10;
	sym10 = ft_isdigit('7');

	/* ft_strnstr */
	char *sym11;
	sym11 = strnstr(dsr13, src13, 9);
	char *sym12;
	sym12 = ft_strnstr(dsr14, src14, 9);

	/* ft_strncmp */
	int sym13;
	sym13 = strncmp(dsr15, src15, 50);
	int sym14;
	sym14 = ft_strncmp(dsr15, src15, 50);

	/* ft_isascii */
	int sym15;
	sym15 = isascii(777);
	int sym16;
	sym16 = ft_isascii(777);

	/* ft_isprint */
	int sym17;
	sym17 = isprint('e');
	int sym18;
	sym18 = ft_isprint('e');

	/* ft_toupper */
	char sym19;
	sym19 = toupper('e');
	char sym20;
	sym20 = ft_toupper('e');

	/* ft_tolower */
	char sym21;
	sym21 = tolower('P');
	char sym22;
	sym22 = ft_tolower('P');

	/* ft_strrchr */
	char *sym23;
	sym23 = strrchr("this is a test", 'i');
	char *sym24;
	sym24 = ft_strrchr("this is a test", 'i');

	/* ft_atoi */
	char *src16 = "99999999999";
	int digit1 = atoi(src16);
	char *src17 = "99999999999";
	int digit2 = ft_atoi(src17);

	/* ft_strlcpy */
	const char *str00 = "образец строки";
	char buf[9] = "\0";
	size_t t1;
	t1 = strlcpy(buf, str00, sizeof(buf));
	size_t t2;
	t2 = ft_strlcpy(buf, str00, sizeof(buf));

	/* ft_strlcat */
	char str01[50] = "1234";
	char str02[50] = "56789ASasSs";
	size_t t3 = strlcat(str01, str02, 9);
	char str04[50] = "1234";
	char str05[50] = "56789ASasSs";
	size_t t4 = ft_strlcat(str04, str05, 9);

	/* ft_calloc */
	char *buf1 = calloc(3, sizeof(int));
	char *buf2 = ft_calloc(3, sizeof(int));
	
	/* ft_strdup */
	char buf3[20] = "0123456789";
	char *istr1;
	istr1 = strdup(buf3);
	char buf4[20] = "0123456789";
	char *istr2;
	istr2 = ft_strdup(buf4);

	/* ft_substr */
	char buf6[20] = "abcdifg2424";
	char *sub2 = ft_substr(buf6, 4 , 20);

	/* ft_strjoin */
	char buf7[20] = "abcdifg";
	char buf8[20] = "1234567";
	char *sub3 = ft_strjoin(buf7, buf8);

	/* ft_strtrim */
	char buf9[20] = "2244557905";
	char buf10[20] = "52";
	char *sub4 = ft_strtrim(buf9, buf10);
	
	/* ft_split */
	char **sub5 = ft_split("Hello World I am here", ' ');

	/* ft_itoa */
	char *sub6 = ft_itoa(-12354326);
	
	/* Вывод */
	printf("-------Работа функций--------\n");
	printf("-----------------------------\n");
	/* ft_memset */
	printf("memset src1: %s\n", src1);
	printf("ft_memset dsr1: %s\n", dsr1);
	printf("-----------------------------\n");
	/* ft_bzero */
	printf("bzero src2: %s\n", src2);
	printf("ft_bzero dsr2: %s\n", dsr2);
	printf("-----------------------------\n");
	/* ft_memcpy */
	printf("memcpy dsr3: %s\n", dsr3);
	printf("ft_memcpy dsr4: %s\n", dsr4);
	printf("-----------------------------\n");
	/* ft_memccpy */
	printf("memccpy dsr5: %s\n", dsr5);
	printf("ft_memccpy dsr6: %s\n", dsr6);
	printf("-----------------------------\n");
	/* ft_memmove */
	printf("memmove dsr7: %s\n", dsr7);
	printf("ft_memmove dsr8: %s\n", dsr8);
	printf("-----------------------------\n");
	/* ft_memchar */
    printf("memchar tmp1: %s\n", src9);
    printf("ft_memchar tmp2: %s\n", dsr9);
    printf("-----------------------------\n");
	/* ft_memcmp */
	printf("memcmp res1: %d\n", res1);
    printf("ft_memcmp res2: %d\n", res2);
    printf("-----------------------------\n");
	/* ft_strlen */
	printf("strlen res3: %d\n", res3);
    printf("ft_strlen res4: %d\n", res4);
    printf("-----------------------------\n");
	/* ft_isalnum */
	printf("isalnum sym5: %d\n", sym5);
    printf("ft_isalnum sym6: %d\n", sym6);
    printf("-----------------------------\n");
	/* ft_isalpha */
	printf("isalpha sym7: %d\n", sym7);
    printf("ft_isalpha sym8: %d\n", sym8);
	printf("-----------------------------\n");
	/* ft_isdigit */
	printf("isdigi sym9: %d\n", sym9);
    printf("ft_isdigi sym10: %d\n", sym10);
	printf("-----------------------------\n");
	/* ft_strncmp */
	printf("strncmp sym13: %d\n", sym13);
    printf("ft_strncmp sym14: %d\n", sym14);
	printf("-----------------------------\n");
	/* ft_isascii */
	printf("isascii sym15: %d\n", sym15);
    printf("ft_isascii sym16: %d\n", sym16);
	printf("-----------------------------\n");
	/* ft_isprint */
	printf("isprint sym17: %d\n", sym17);
    printf("ft_isprint sym18: %d\n", sym18);
	printf("-----------------------------\n");
	/* ft_toupper */
	printf("toupper sym19: %c\n", sym19);
    printf("ft_toupper sym20: %c\n", sym20);
	printf("-----------------------------\n");
	/* ft_tolower */
	printf("tolower sym21: %c\n", sym21);
    printf("ft_tolower sym22: %c\n", sym22);
	printf("-----------------------------\n");
	/* ft_strrchr */
	printf("strrchr sym23: %s\n", sym23);
    printf("ft_strrchr sym24: %s\n", sym24);
	printf("-----------------------------\n");
	printf("strchr sym3: %s\n", sym3);
	printf("ft_strchr sym4: %s\n", sym4);
    printf("-----------------------------\n");
	/* ft_strnstr */
	printf("strnstr sym11: %s\n", sym11);
    printf("ft_strnstr sym12: %s\n", sym12);
	printf("-----------------------------\n");
	/* ft_atoi */
	printf("atoi digit1: %d\n", digit1);
    printf("ft_atoi digit2: %d\n", digit2);
	printf("-----------------------------\n");
	/* ft_strlcpy */
	printf("strlcpy t1: %zu\n", t1);
    printf("ft_strlcpy t2: %zu\n", t2);
	printf("-----------------------------\n");
	/* ft_strlcat */
	printf("strlcat str01: size: %zu, str: %s\n", t3, str01);
	printf("ft_strlcat str04: size: %zu, str: %s\n", t4, str04);
	printf("-----------------------------\n");
	/* ft_calloc */
	printf("calloc buf1: %zu\n", ft_strlen(buf1));
    printf("ft_calloc buf2: %zu\n", ft_strlen(buf2));
	printf("-----------------------------\n");
	/* ft_strdup */
	printf("strdup istr1: %s\n", istr1);
    printf("ft_strdup istr2: %s\n", istr2);
	printf("-----------------------------\n");
	/* ft_substr */
    printf("ft_substr sub2: %s\n", sub2);
	printf("-----------------------------\n");
	/* ft_strjoin */
    printf("ft_strjoin sub3: %s\n", sub3);
	printf("-----------------------------\n");
	/* ft_strtrim */
    printf("ft_strtrim sub4: %s\n", sub4);
	printf("-----------------------------\n");
	/* ft_split */
	int i = 0;
	while (sub5[i] != NULL)
	{
		printf("ft_split sub5: %s\n", sub5[i]);
		++i;
	}
	printf("-----------------------------\n");
	/* ft_itoa */
    printf("ft_itoa sub6: %s\n", sub6);
	printf("-----------------------------\n");
	/* ft_putchar_fd */
	ft_putchar_fd('R', 1);
	ft_putchar_fd('\n', 1);
	printf("-----------------------------\n");
	/* ft_putchar_fd */
	ft_putstr_fd("Hello world\n", 1);
	printf("-----------------------------\n");
	/* ft_putendl_fd */
	ft_putendl_fd("Line without hyphenation", 1);
	printf("-----------------------------\n");
	/* ft_putnbr_fd */
	ft_putnbr_fd(-6128, 1);
	printf("\n-----------------------------\n");
	return (0);
}
