#include "Coord.h"

class Pairs {
private:
	int m, n;
	Coord A, B;
public:
	void setM(int);
	void setN(int);
	int getM();
	int getN();
	int sum();
	void setA(int, int);
	void setB(int, int);
	void printP();
	void printC();
};
