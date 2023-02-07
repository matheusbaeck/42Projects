int ft_split_count(char const *s, char c)
{
	int		i;
    size_t	sub_str_size;
	size_t	sub_str_count;

	i = 0;
	sub_str_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			sub_str_count *= -1;
		}
		else if (sub_str_count <= 0)
		{
			sub_str_count++;
			sub_str_count *= -1;
		}
		i++;		
	}
	if (sub_str_count < 0)
		sub_str_count *= -1;
	return (i);
}

char    **ft_split(char const *s, char c)
{
	size_t	i;
    size_t	sub_str_size;
	int		sub_str_count;
	char	*sub_str;
    char**	s2;

	sub_str_count = ft_split_count(*s, c);
	if (sub_str_count == 0)
	{
		s2[0][0] = 0;
		return (s2);
	}
	i = 0;
	s2 = (char **) malloc(sub_str_count * sizeof(char *));
	if (!(s2))
		return (0);
	sub_str = strchr(s, c);
	while (sub_str)
	{
		sub_str++;
		sub_str_size = strlen(sub_str) - strlen(strchr(sub_str, c));
		if (strchr(sub_str, c))
		{
			s2[i] = malloc(sizeof(char) * (sub_str_size + 1));
			strlcpy(s2[i], sub_str, sub_str_size);


		}
		else
		{
			sub_str_size = strlen(sub_str);
			s2[i] = malloc(sizeof(char) * (sub_str_size + 1));
			strlcpy(s2[i], sub_str, sub_str_size);
			return (s2);
		}
		i++;
	}
	return (0);
}

0123456789
abcdecghi*
