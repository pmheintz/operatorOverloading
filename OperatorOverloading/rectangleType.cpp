#include "rectangleType.h"



rectangleType::rectangleType()
{
	length = 0;
	width = 0;
}

rectangleType::rectangleType(double l, double w)
{
	setDimension(l, w);
}


rectangleType::~rectangleType()
{
}

void rectangleType::setDimension(double l, double w)
{
	if (l >= 0)
	{
		length = l;
	}
	else
	{
		length = 0;
	}

	if (w >= 0)
	{
		width = w;
	}
	else
	{
		width = 0;
	}
}

double rectangleType::getLength() const
{
	return length;
}

double rectangleType::getWidth() const
{
	return width;
}

double rectangleType::area() const
{
	return length * width;
}

double rectangleType::perimeter() const
{
	return 2 * (length + width);
}

void rectangleType::print() const
{
	cout << "Length = " << length << endl << "Width = " << width << endl;
}
