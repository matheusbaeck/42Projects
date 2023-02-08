#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new_len;
	char	*s2;

	if (strlen(s) > start)
	{
		s += start;
		new_len = strlen(s);
		if (new_len >= len)
			new_len = len;
	}
	else
		new_len = strlen(s);
	s2 = malloc(new_len + 1 * sizeof(char));
	if (!(s2))
		return (0);
	if (strlcpy(s2, s, new_len + 1) != strlen(s))
		return (0);
	strlcpy(s2, s, new_len + 1);
	return (s2);
}

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (*s && s[i])
	{
		if (s[i] == (char) c)
		{
			s += i;
			i = 1;
		}
		else
			i++;
	}
	if (c == '\0')
		s += i;
	if (*s != c)
		return (0);
	return ((char *) s);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
		{
			return ((char *) s);
		}
		s++;
	}
	if (*s != c)
		return (0);
	return ((char *) s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	unsigned int	start;
	char			*s2;

	start = 0;
	len = strlen(s1);
	while (strchr(set, s1[start]) && start < len)
		start += 1;
	if (start == len)
	{
		*s2 = '\0';
		return (s2);
	}	
	while (strchr(set, s1[len - 1]) && len > 0)
		len -= 1;
	len -= start;
	s2 = ft_substr(s1, start, len);
	return (s2);
}


int	main(void)
{
	char *str;
	str = ft_strtrim("          ", " ");
	return (0);
}
