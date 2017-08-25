#include <iostream>
using namespace std;

class Coord{
private:
	int x, y;
public:
	int n;
	Coord();
	Coord(int, int);
	void setX(int);
	void setY(int);
	int getX() const;	// const!!
	int getY() const;	//
	void print() const;	//
	void testConst();
};
