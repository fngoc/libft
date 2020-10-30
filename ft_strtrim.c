#include <stdlib.h>

/*
** ft_strtrim: Выделяет и возвращает копию
** 'S1' с удаленными символами, указанными
** в 'set' от начала и до конца строки.
*/

size_t	ft_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;
	int		g;

	i = 0;
	j = 0;
	g = 0;
	p = malloc(ft_strlen(s1) + 1);
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
				++j;
			else
			{
				++i;
				break ;
			}
		}
		p[g++] = s1[i];
		++i;
		j = 0;
	}
	return (p);
}
