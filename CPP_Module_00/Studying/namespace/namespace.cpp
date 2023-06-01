#include<stdio.h>

int	x = 1;
int	f(void) { return 2; }

namespace Foo{
	int	x = 10;
	int	f(void) { return 11; }
}

namespace Bar
{
	int	x = 20;
	int	f(void) { return 21; }
} // namespace Bar

namespace Muf = Bar;

int	main(void)
{
	printf("Global | x = %d\n", x);
	printf("Global | f() = %d\n\n", f());

	printf("Foo | x = %d\n", Foo::x);
	printf("Foo | f() = %d\n\n", Foo::f());

	printf("Bar | x = %d\n", Bar::x);
	printf("Bar | f() = %d\n\n", Bar::f());

	printf("Muf | x = %d\n", Muf::x);
	printf("Muf | f() = %d\n\n", Muf::f());

	printf(":: | x = %d\n", ::x);
	printf(":: | f() = %d\n\n", ::f());

	return (0);
}