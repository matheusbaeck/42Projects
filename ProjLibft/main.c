
#include "libft.h"

#include <string.h>
#include <stdio.h>
#include <unistd.h>

/*
void	test1_strlcat(void)
{
	int		result_test;
	int		result_orig;
	int		size = 1;
	char	dst_orig[10] = "a";
	char	src_orig[50] = "lorem ipsum dolor sit amet";

	write(1, src_orig, 50);
	write(1, "\n", 1);
	write(1, dst_orig, 50);
	write(1, "\n", 1);
	result_orig = strlcat(dst_orig, src_orig, size);
	write(1, src_orig, 50);
	write(1, "\n", 1);
	write(1, dst_orig, 50);

	write(1, "\n\n", 2);
	char	dst_test[10] = "a";
	char	src_test[50] = "lorem ipsum dolor sit amet";

	write(1, src_test, 50);
	write(1, "\n", 1);
	write(1, dst_test, 50);
	write(1, "\n", 1);
	result_test = ft_strlcat(dst_test, src_test, size);
	write(1, src_test, 50);
	write(1, "\n", 1);
	write(1, dst_test, 50);
	write(1, "\n", 1);
	printf("%i  %i", result_orig, result_test);
}

void	test2_strlcat(void)
{
	int		result_test;
	int		result_orig;
	int		size = 5;
	char	dst_orig[15] = "";
	char	src_orig[50] = "lorem ipsum dolor sit amet";

	memset(dst_orig, 'r', 15);
	write(1, src_orig, 15);
	write(1, "\n", 1);
	write(1, dst_orig, 15);
	write(1, "\n", 1);
	result_orig = strlcat(dst_orig, src_orig, size);
	write(1, src_orig, 15);
	write(1, "\n", 1);
	write(1, dst_orig, 15);

	write(1, "\n\n", 2);
	char	dst_test[15] = "";
	char	src_test[50] = "lorem ipsum dolor sit amet";

	memset(dst_test, 'r', 15);
	write(1, src_test, 15);
	write(1, "\n", 1);
	write(1, dst_test, 15);
	write(1, "\n", 1);
	result_test = ft_strlcat(dst_test, src_test, size);
	write(1, src_test, 15);
	write(1, "\n", 1);
	write(1, dst_test, 15);
	write(1, "\n", 1);
	printf("%i  %i", result_orig, result_test);
}

void	test_strncmp(void)
{
	int	r;

	r = ft_strncmp("test\200", "test\0", 6);
	write(1, "test\200", 5);
	write(1, "\n", 1);
	write(1, "test\0", 6);
	write(1, "\n", 1);
	printf("%i\n", r);
	r = '\200' - '\0';
	printf("%i\n", r);

}*/

// void	test_atoi(void)
// {
// 	int	n;
// 	int error;

// 	error = 0;
// 	n = ft_atoi("546");
// 	if (546 != n)
// 	{
// 		error *= 10;
// 		error += 1;
// 	}

// 	n = ft_atoi("\t\n\r\v\f  469 \n");
// 	if (469 != n)
// 	{
// 		error *= 10;
// 		error += 2;
// 	}

// 	n = ft_atoi("\n\n\n  -46\b9 \n5d6");
// 	if (-46 != n)
// 	{
// 		error *= 10;
// 		error += 3;
// 	}

// 	n = ft_atoi("\e475");
// 	if (0 != n)
// 	{
// 		error *= 10;
// 		error += 4;
// 	}

// 	n = ft_atoi("\t\n\r\v\fd469 \n");
// 	if (0 != n)
// 	{
// 		error *= 10;
// 		error += 5;
// 	}
// 	printf("error %i\n", error);
// }

// void	test_itoa(void)
// {
// 	char	*alpha;
// 	int		number;
// 	int		count;

// 	count = -2147483648;
// 	alpha = ft_itoa(count);
// 	while (number == count)
// 	{
// 		alpha = ft_itoa(count);

// 	}
// 	write(1, alpha, 12);
// }

// void test_strdup(void)
// {
// 	char	*str;

// 	str = ft_strdup("123456789");
// 	write(1, str, 12);
// }

// void test_trim2(void)
// {
// 	char strim
// 	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
//     if (!(strtrim = ft_strtrim(s1, " ")))
//         ft_print_result("NULL");
// }

int	main(void)
{
	//test1_strlcat();
	//test2_strlcat();
	//test_strncmp();
	//test_itoa();
	//test_atoi();
	//test_strdup();

	return (0);
}
