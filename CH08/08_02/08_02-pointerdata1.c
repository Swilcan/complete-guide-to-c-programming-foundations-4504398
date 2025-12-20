#include <stdio.h>

int main()
{
	int alpha;
	int *ptr;

	alpha = 99;

	//  initialize the pointer 
	ptr = &alpha;

	printf("A pointer is a variable that holds a memory location\n");

	//  %p displays a memory location value
	printf("address of variable alpha is %p\n",&alpha);
	printf("value stored in pointer ptr is memory location %p\n",ptr);
	printf("\n");

	return(0);
}
