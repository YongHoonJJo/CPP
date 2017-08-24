#include "Coord.h"

class circle {
private:
	Coord P;
	int r;
public:
	circle();
	circle(int, int, int);
	void set(int, int, int);
	void print();
	double area();
};
