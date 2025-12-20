#include <stdio.h>

int main()
{
	int alpha;
	alpha = 27;

	printf("A pointer is a variable that holds a memory location\n");
	printf("integer variable `alpha` holds the value %d\n",alpha);
	printf("integer variable `alpha` occupies %lu bytes of storage\n",sizeof(alpha));
	printf("memory location address %p\n",&alpha);
	printf("\n");

	return(0);
}

