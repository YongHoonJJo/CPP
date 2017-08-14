#include <cstdio>

namespace {
	int n=4;
}

// n = 8; error!!

int func() { return n; }

namespace ns {
	void func();
}


int main()
{
	printf("%d\n", n);
	// 4

	n = 8;
	printf("%d\n", n);
	// 8

	printf("%d\n", func());	
	// 8

	ns::func();	
	// called ns::func()

	using ns::func; // not using ns::func();
	func();

	return 0;
}

namespace ns {
	void func() {
		puts("called ns::func()");
	}
}
