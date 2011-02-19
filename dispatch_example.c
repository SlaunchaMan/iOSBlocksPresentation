#import <stdio.h>
#import <stdlib.h>
#import <dispatch/dispatch.h>


int main(int ac, char *av[])
{
	dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0ul);

	dispatch_async(queue, ^{
		printf("Hello, World! This is in a block!\n");
	});

	dispatch_sync(queue, ^{
		printf("And so is this!\n");
	});

	return EXIT_SUCCESS;
}
