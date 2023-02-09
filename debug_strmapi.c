#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size_s2;
	unsigned int	i;
	char			*s2;

	size_s2 = strlen(s);
	i = 0;
	s2 = malloc(sizeof(char) * (size_s2 + 1));
	if (!(s2))
		return (0);
	while (i < size_s2)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}


char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int	main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
