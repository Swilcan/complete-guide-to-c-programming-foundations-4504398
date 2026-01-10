#include <stdio.h>

int main()
{
	//  integer variable
	int alpha;
	//  pointer to integer variable
	int *pa;

	//  initialize the pointer
	pa = &alpha;

	printf("A pointer is a variable that holds a memory location\n");
	printf("alpha is stored at memory address %p\n",pa);
	printf("%p\n",pa+1);
	printf("\n");

	return(0);
}

