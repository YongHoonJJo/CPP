#include "Coord.h"

Coord::Coord() : x(0), y(0) {}	// Addition

Coord::Coord(int x1, int y1) : x(x1), y(y1) {} // Addition

void Coord::set(int x1, int y1){
	 x = x1; 
	 y = y1;
}

void Coord::setX(int x1){ x = x1; }

void Coord::setY(int y1){ y = y1; }

int Coord::getX(){ return x; }

int Coord::getY(){ return y; }

