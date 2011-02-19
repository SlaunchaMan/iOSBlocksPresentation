#include <stdlib.h>
#include <stdio.h>

int main(int ac, char *av[])
{
	void (^helloWorldBlock)(void) = ^ {
		printf("Hello, World!\n");
	};

	helloWorldBlock();

	return EXIT_SUCCESS;
}
