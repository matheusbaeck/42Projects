#include <stdio.h>
//#include "sumutil.h"
typedef int (*PFI)();
PFI evenodd(int x);
int process(PFI fp, int x);

int main()
{
	int	x, y, z;
	PFI	fptr;

	while (scanf(%d, &x) != EOF)
	{
		printf("***Function Pointers - Squares and Cubes***\n\n");
		printf("Type inteers, EOF to quit\n");
		ftpr = evenodd(x);
		y = process(fptr, x);
		printf("integrer = %d power 2 or 3 = %d\n", x ,y);
	}
}

/*
Function returns a function pointer. If x is odd, it returns
a pointer to icube(). Otherwise, it returns a poitnter to
isquare().
*/

PFI evendodd(int x)
{
	int isquare(), iscube();

	if (x % 2)
		return (icube); /*icube is a pointer to function icube() */
	else
		return (isquare); /*isquare is a pointer to funtion iscube()*/
}

/* 
Function return the result of appllying the deferenced function 
pointer fp to x
*/

int process(PFI fp, int x)
{
	return (*fp)(x); /*dereferenced fp applied to x */
}

/*
File: sumultil.h - contiued
*/

int icube(int x);

/* File: sumutil.c - continued */
int icube(int x)
{
	return x*x*x;
}