#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int	ft_powten(int pow_n)
{
	int	n;

	n = 10;
	if (pow_n < 0)
		return (0);
	if (pow_n == 0)
		return (1);
	if (pow_n == 1)
		return (10);
	while (pow_n > 1)
	{
		n *= 10;
		pow_n--;
	}
	return (n);
}

static void	ft_inttoa(char *str, int n, size_t pow_n, int sign)
{
	size_t	str_i;
	char	append;
	int		pow;
	int		n_split;

	if (n == 0)
		str[0] = '0';
	str_i = strlen(str);
	while (pow_n > 0)
	{
		pow = ft_powten(pow_n - 1);
		n_split = ((n * sign) - ((n % (pow)) * sign));
		append = (n_split / (pow)) + '0';
		n = n - (n_split * sign);
		str[str_i] = (char)append;
		pow_n--;
		str_i++;
	}
	str[str_i] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	pow_n;
	int		n_count;
	int		sign;
	char	*str;

	pow_n = 0;
	n_count = n;
	while (n_count != 0 && ++pow_n)
		n_count = n_count / 10;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		str = malloc((pow_n + 2) * sizeof(char));
		str[0] = '-';
	}
	else
		str = malloc((pow_n + 1) * sizeof(char));
	if (!(str))
		return (0);
	ft_inttoa(str, n, pow_n, sign);
	return (str);
}


int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	// write(1, str, 6);
	// printf("\n%s\n", str);
	if (!(strcmp(str, "0")))
		printf("01 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(9);
	if (!(strcmp(str, "9")))
		printf("02 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(-9);
	if (!(strcmp(str, "-9")))
		printf("03 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(10);
	if (!(strcmp(str, "10")))
		printf("04 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(-10);
	if (!(strcmp(str, "-10")))
		printf("05 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(8124);
	if (!(strcmp(str, "8124")))
		printf("06 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(-9874);
	if (!(strcmp(str, "-9874")))
		printf("07 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(543000);
	if (!(strcmp(str, "543000")))
		printf("08 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(-2147483648LL);
	if (!(strcmp(str, "-2147483648")))
		printf("09 OK\n");
	else
		printf("%s\n", str);

	str = ft_itoa(2147483647);
	if (!(strcmp(str, "2147483647")))
		printf("10 OK\n");
	else
		printf("%s\n", str);
	return (0);
}
