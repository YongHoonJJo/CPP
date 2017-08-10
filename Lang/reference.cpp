#include <cstdio>

typedef struct arr100 {
	int arr[100];
} Arr100;

void c_Swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void ref_Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int sum(Arr100 &t) // Decreasing memory overhead.
{
	int Sum=0;
	for(int i=0; i<100; i++)
		Sum += t.arr[i];
	return Sum;
}

int main()
{
	int x = 3;
	int y = 5;

	// int &ref; => impossible
	// &ref = x; => impossible
	int &ref = x; 
	printf("%d %d\n", x, ref);
	printf("%p %p\n", &x, &ref);

	c_Swap(&x, &y);
	printf("%d %d\n", x, y);

	ref_Swap(x, y);
	printf("%d %d\n", x, y);

		
	Arr100 A;
	for(int i=0; i<100; i++)
		A.arr[i] = 100-i;

	int Sum = sum(A); 
	printf("%d\n", Sum);

	return 0;
}
