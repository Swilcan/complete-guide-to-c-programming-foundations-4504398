#include <stdio.h>

int main()
{
	int alpha;
	int *ptr;

	alpha = 99;
	ptr = &alpha;

	//  %p displays a memory location value
	printf("address of variable alpha is %p\n",&alpha);
	printf("value stored in pointer ptr is %p\n",ptr);

	//  %d displays an integer
	printf("content of variable alpha is %d\n",alpha);

	//  dereferenced pointer variable, *ptr
	printf("content of memory address %p is %d\n",ptr,*ptr);
	printf("\n")

	return(0);
}
