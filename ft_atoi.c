#include <stdio.h>

/*
** ft_atoi: конвертирует строку, на которую
** указывает параметр str, в величину типа int.
*/

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_atoi(const char *str)
{
	int i;
	int n;
	int sign;

	i = 0;
	while (ft_isalpha(str[i]) || str[i] == ' '
		   || str[i] == '\t' || str[i] == '\n'
		   || str[i] == '\v' || str[i] == '\f'
		   || str[i] == '\r')
		++i;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (ft_isdigit(str[i]))
	{
		n = 10 * n + (str[i] - '0');
		++i;
	}
	return (n * sign);
}
