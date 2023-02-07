char    **ft_split(char const *s, char c)
{
	size_t	i;
    size_t	sub_str_size;
	size_t	sub_str_count;
	char	*sub_str;
    char**	s2;

	i = -1;
	sub_str_count = 0;
	while (i++ || s[i])
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
	}
	i = -1;
	s2 = (char **) malloc(sub_str_count * sizeof(char *));
	if (!(s2))
		return (0);
	sub_str = strchr(s, c);
	while (sub_str && i++)
	{
		sub_str++;
		sub_str_size = strlen(sub_str) - strlen(strchr(sub_str, c));
		if (strchr(sub_str, c))
		{
			s2[i] = calloc(sizeof(char *) * (sub_str_size + 1));
			strlcpy(s2[i], sub_str, sub_str_size);

		}
		else
		{
			sub_str_size = strlen(sub_str);
			s2[i] = calloc(sizeof(char *) * (sub_str_size));
			strlcpy(s2[i], sub_str, sub_str_size)
			return (s2);
		}
	}
	return (s);
}

0123456789
abcdecghi*
