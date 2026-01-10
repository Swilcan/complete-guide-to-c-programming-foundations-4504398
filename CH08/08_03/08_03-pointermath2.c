#include <stdio.h>

int main()
{
	int twos[5] = { 2, 4, 6, 8, 10 };
	int *pt;

	pt = twos;

	printf("twos is stored at memory address %p\n",pt);
	printf("%p\n",pt+1);
	printf("\n");

	return(0);
}

