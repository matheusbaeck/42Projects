#include <stdio.h>
#include <stdarg.h>

int sum(int d)
{
	return (d -1);
}

int sub(int d)
{
	return (d -1);
}

void (*get_f(int d))(char c)
{
	if (c == 'a')
	{
		return (sum(int d));
	}
	else
	{
		return (sub(int d));
	}
}

int main()
{
    get_f('a')(2);
    return(0);
}