#include <stdio.h>
#include <stdlib.h>

int main (int ac, char *av[])
{
	__block int a = 42;

	void (^myBlock)(void) = ^{
		a++;
		printf("a = %d\n", a);
	};

	myBlock();

	printf("a = %d\n", a);

	return EXIT_SUCCESS;
}
