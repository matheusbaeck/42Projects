#include <ctype.h>
#include <locale.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stringArray
{
	int		length;
	char	**items;
}			stringArray;

/**
 * @param protons_start The initial number of protons
 * @param neutrons_start The initial number of neutrons
 * @param protons_target The desired number of protons
 * @param neutrons_target The desired number of neutrons
 */
stringArray	solve(int protons_start, int neutrons_start, int protons_target,
		int neutrons_target)
{
	int			n;
	int			p;
	int			a;
	int			i;

	// Write your code here
	n = 0;
	p = 0;
	a = 0;
	i = 0;
	while (protons_start != protons_target || neutrons_start != neutrons_target)
	{
		if (protons_start < protons_target)
		{
			protons_start++;
			p++;
		}
		else if (protons_start == protons_target + 1)
		{
			protons_start++;
			p++;
		}
		if (neutrons_start < neutrons_target)
		{
			neutrons_start++;
			n++;
		}
		else if (neutrons_start == neutrons_target + 1)
		{
			neutrons_start++;
			n++;
		}
		if (protons_start > protons_target + 1
			|| neutrons_start > neutrons_target + 1)
		{
			protons_start -= 2;
			neutrons_start -= 2;
			a++;
		}
	}
	stringArray string_array = {(n + p + a), malloc(sizeof(char *) * (n + p + a))};
	while (i < (n + p + a))
	{
		if (i < p)
		{
			string_array.items[i] = "PROTON";
		}
		else if (i < p + n)
		{
			string_array.items[i] = "NEUTRON";
		}
		else if (i < p + n + a)
		{
			string_array.items[i] = "ALPHA";
		}
		i++;
	}
	return (string_array);
}

int main(void)
{
	solve(0,3,2,1);
	return (0);
}