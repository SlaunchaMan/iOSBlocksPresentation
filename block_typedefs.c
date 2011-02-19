#import <stdio.h>
#import <stdlib.h>


typedef void (^myBlock)();
typedef int (^floatToIntBlock)(float);

int functionTakingBlock(floatToIntBlock foo);

int main (int ac, char *av[])
{
	myBlock foo = ^ { printf("Hello, World!\n"); };

	foo();

	floatToIntBlock foo2 = ^(float a){ return (int)a; };

	printf("%d\n", foo2(2.5));

	printf("%d\n", functionTakingBlock(foo2));

	return EXIT_SUCCESS;
}

int  functionTakingBlock(floatToIntBlock foo)
{
	return foo(5.5f);
}
