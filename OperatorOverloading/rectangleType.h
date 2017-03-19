/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Rectangle class header
* March 22, 2017 */

#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>

using namespace std;

class rectangleType
{
private:
	double length;
	double width;

public:
	rectangleType();
	rectangleType(double l, double w);
	~rectangleType();
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;
};

#endif