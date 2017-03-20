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
	friend ostream& operator << (ostream&, const rectangleType &);
	friend istream& operator >> (istream&, rectangleType &);

protected:
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
	rectangleType operator++(int);
	rectangleType operator++();
	rectangleType operator--(int);
	rectangleType operator--();
	bool operator>(const rectangleType& aRectangle)const;
	bool operator<(const rectangleType& aRectangle)const;
	bool operator>=(const rectangleType& aRectangle)const;
	bool operator<=(const rectangleType& aRectangle)const;
	rectangleType operator-(const rectangleType& aRectangle)const;
	rectangleType operator/(const rectangleType& aRectangle)const;
};

#endif