#ifndef COORD_H
#define COORD_H

class Coord {
private:
	int x, y;
public:
	Coord();			// Addition
	Coord(int, int);	// Addition
	void set(int, int);
	void setX(int);
	void setY(int);
	int getX();
	int getY();
};

#endif
