
#include "/Users/mamagalh/42Projects/#header/libft.h"

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

}

void test_strdup(void)
{
	char	*str;

	str = ft_strdup("123456789");
	write(1, str, 12);
}

void test_trim2(void)
{
	char strim
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
    if (!(strtrim = ft_strtrim(s1, " ")))
        ft_print_result("NULL");
}


void	test_itoa(void)
{
	char	*alpha;
	int		number;
	int		count;

	count = -2147483648;
	alpha = ft_itoa(count);
	while (number == count)
	{
		alpha = ft_itoa(count);

	}
	write(1, alpha, 12);
}

void	test_itoa2(void)
{
	char	*str;

	str = ft_itoa(0);
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
}


void test_strjoin()
{
	char	str1[4] = "";
	char	str2[4] = "123";
	char	*result = ft_strjoin(str1, str2);
	write(1 , result, ft_strlen(result));
}

void	test_split(void)
{
	//ft_split(" 42 42 42 42 42 424242   4242  42", ' ');

	char	**tabstr;
	int		i;

	i = 0;
	tabstr = ft_split("lorem ipsum dolo sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (tabstr[i] != NULL)
	{
		printf("%s\n", tabstr[i]);
		i++;
	}
}

void	test_strtrim(void)
{
	ft_strtrim("xxxz  test with x and z and x .  zx  xx z", "z x");
	ft_strtrim(".teste, bla ,.,.", ",.");
}

void	test_atoi(void)
{
	int	n;
	int error;

	error = 0;
	n = ft_atoi("546");
	if (546 != n)
	{
		error *= 10;
		error += 1;
	}

	n = ft_atoi("\t\n\r\v\f  469 \n");
	if (469 != n)
	{
		error *= 10;
		error += 2;
	}

	n = ft_atoi("\n\n\n  -46\b9 \n5d6");
	if (-46 != n)
	{
		error *= 10;
		error += 3;
	}

	n = ft_atoi("\e475");
	if (0 != n)
	{
		error *= 10;
		error += 4;
	}

	n = ft_atoi("\t\n\r\v\fd469 \n");
	if (0 != n)
	{
		error *= 10;
		error += 5;
	}
	printf("error %i\n", error);
}
*/

// void	test_strnstr()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	ft_strnstr(haystack, needle, -1); //== haystack + 1)
// 	ft_strnstr(haystack, "a", -1); //== haystack
// 	ft_strnstr(haystack, "c", -1); //== haystack + 4
// }


int	main(void)
{
	//test1_strlcat();
	//test2_strlcat();
	//test_strncmp();
	//test_itoa2();
	//test_atoi();
	//test_strdup();
	//test_strjoin();
	//test_strtrim();
	// test_split();
	// test_strnstr();
	//ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("\nEND OF TEST\n");
	return (0);
}
