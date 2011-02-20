#import <Foundation/Foundation.h>

int main (int ac, char *av[])
{
	NSString *helloWorld = [[NSString alloc] initWithString:@"Hello, World!"];

	void (^helloBlock)(void) = ^{
		NSLog(@"%@", helloWorld);
	};

	[helloWorld release];

	helloBlock();

	return EXIT_SUCCESS;
}
