#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	//char *p = 0;
	//int i;
	//int j;

	//"%d\n", ft_printf("hola")

	// "%s%p%d%x%i%u%c%", "ola", p, 42, 42, 42, 42, '%'

	//"%s %d %i %u %x    %X  %X  %X  %X", "-42", -42, -42 ,-42 ,-42, 42, 42, 42, 42

	//"i%%udh\nc%c\ns%s\nd%d\ni%i\np%p\nx%x\nX%X", 'a', "hello world!!", INT_MIN, INT_MAX, NULL, INT64_MAX, INT64_MAX
	
	// int i = ft_printf("%XPzv8jF%%g(\vx%uiV ]Z]3?B%pZ:C\n$I", 897484954, 1241661530, (void *)2477587111969976633);
	// printf("\n");
	// int y = printf("%XPzv8jF%%g(\vx%uiV ]Z]3?B%pZ:C\n$I", 897484954, 1241661530, (void *)2477587111969976633);
	// printf("\n");
	// printf("%d\n", i);
	// printf("%d\n", y);

	ft_printf("RETURN: %d\n", ft_printf("FT_printf: %d\n%i\n%x\n%X\n%c\n%s\n%u\n%%\n%kkkk", 10, 10, -10, -10, 'c', "string", -10));
	printf("RETURN: %d\n", printf("FT_printf: %d\n%i\n%x\n%X\n%c\n%s\n%u\n%%\n%kkkk", 10, 10, -10, -10, 'c', "string", -10));
	return (0);
}