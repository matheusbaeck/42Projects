#include <unistd.h>

int main(void)
{
	int *ptr;
	char *ptr2;

	*ptr = 1;
	// *ptr2 = "baeck";
	write(1, &ptr, 20);
	// write(1, "\n", 1);
	// write(1, &ptr, 20);
	return (0);
}
