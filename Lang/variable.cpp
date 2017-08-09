#include <cstdio>

int main()
{
	int a=5;
	printf("a = %d\n", a);

	int b(3), c(4); // Initializing a variable 
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	for(int i=0; i<5; i++)
		printf("%d ", i);
	puts("");

	// TypeCasting
	double f = 5.5;
	int n = static_cast<int>(f); // int n = (int)f;
	printf("%lf %d\n", f, n);
	
}
