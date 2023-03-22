#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *p = 0;
	int i;
	int j;

	//"%d\n", ft_printf("hola")

	// "%s%p%d%x%i%u%c%", "ola", p, 42, 42, 42, 42, '%'

	//"%s %d %i %u %x    %X  %X  %X  %X", "-42", -42, -42 ,-42 ,-42, 42, 42, 42, 42

	//"i%%udh\nc%c\ns%s\nd%d\ni%i\np%p\nx%x\nX%X", 'a', "hello world!!", INT_MIN, INT_MAX, NULL, INT64_MAX, INT64_MAX
	
	i = ft_printf("%u%%%%%%%%%%%%%akkkk", -10);
	printf("\n");
	j = printf("%u%%%%%%%%%%%%%akkkk", -10);

	printf("\n%d  ->  %d", i, j);
	return (0);
}