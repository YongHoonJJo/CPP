#include <cstdio>

namespace ns {
	int n = 5;
	double f = 3.3;
	char c = 'G';
}

int k = 10;

namespace ns1 {
	int n = 11;	
}

namespace ns2 {
	int n = 22;
}

namespace ns3 {
	int n = 33;
	namespace ns4 {
		int n = 44;
	}
}

int main()
{
	// n = 3; (x)
	ns::n = 3;
	printf("%d\n", ns::n);
	// 3

	/*
	int n = 5;
	printf("%d %d\n", n, ns::n);
	// 5 3
	*/

	/*
	using ns::n;
	printf("%d\n", n);
	// 3

	using ns::f;
	using ns::c;
	printf("%lf %c\n", f, c);
	// 3.300000 G
	*/

	/*
	using namespace ns;	// directive
	
	printf("%d %lf %c\n", n, f, c);
	// 3 3.300000 G

	int k = 3;
	printf("%d %d\n", k, ::k);
	// 3 10
	*/

	/************************/
	
	printf("%d %d\n", ns1::n, ns2::n);
	// 11 22

	/*
	using ns1::n;
	using ns2::n;

	printf("%d\n", n);	// error!!
	*/


	{
		using namespace ns1;
		printf("%d\n", n);
		// 11
	}
	
	{
		using namespace ns2;
		printf("%d\n", n);
		// 22
	}

	printf("%d %d\n", ns3::n, ns3::ns4::n);	
	// 33 44

	return 0;
}
