// char	*ft_itoa(int n);

// void	ft_putstr_fd(char *s, int fd)
// {
// 	while (*s)
// 	{
// 		write(fd, s, 1);
// 		s++;
// 	}
// }

char	*sum(int c)
{
	return ("soma");
}

char	*sub(int c)
{
	return ("divisao");
}

int	get_f(char c)
{
	char	*(*f)(int);

	if (c == '+')
		f = sum;
	else
		f = sub;
	return (f);
}

int	main(void)
{
	void (*(*f)(int))(char *);

	*f = get_f('-');
	(*(*f)(2))(*(*f)(2));
	return (0);
}
