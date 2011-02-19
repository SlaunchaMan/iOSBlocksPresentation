#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int a = 42;

	void (^myBlock)(void) = ^{
		printf("a = %d\n", a);
	};

	myBlock();

	return EXIT_SUCCESS;
}
