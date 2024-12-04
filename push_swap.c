#include <stdio.h>
#include "push_swap.h"

int main()
{
	int i;
	int lenA;
	int lenB;
	int stackA[] = {5, 2, 7, 1, 6, 3, 9, 4, 8};
	int stackB[9];

	lenA = 9;
	lenB = 0;
	i = 0;
	while (i < 2)
	{
		p(stackA, stackB, lenA, lenB);
		i++;
	}
	i = 0;
	printf("STACK_A\n");
	while (i < lenA)
	{
		printf("%i, ", stackA[i]);
		i++;
	}
	printf("\n");

	i = 0;
	printf("STACK_B\n");
	while (i < lenB)
	{
		printf("%i, ", stackB[i]);
		i++;
	}
	printf("\n");

}
