/* assert example */
#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */

//If this expression evaluates to 0, 
//this causes an assertion failure that terminates the program.
void print_number(int* myInt) {
	assert (myInt!=NULL);
	printf ("%d\n",*myInt);
}

int main ()
{
	int a=10;
	int * b = NULL;
	int * c = NULL;

	b=&a;

	print_number (b);
	print_number (c);

	/* Output
	10
	Assertion failed: (myInt!=NULL), function print_number, file assert.cpp, line 6.
	Abort trap: 6
	*/

	return 0;
}
