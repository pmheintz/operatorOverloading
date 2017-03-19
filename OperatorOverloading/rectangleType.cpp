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

rectangleType rectangleType::operator++(int)
{
	rectangleType temp;
	temp = *this;
	++length;
	++width;
	return temp;
}

rectangleType rectangleType::operator++()
{
	++length;
	++width;
	return *this;
}

rectangleType rectangleType::operator--(int)
{
	rectangleType temp;
	temp = *this;
	--length;
	--width;
	return temp;
}

rectangleType rectangleType::operator--()
{
	--length;
	--width;
	return *this;
}

ostream & operator<<(ostream& osObject, const rectangleType& rectangle)
{
	osObject << "Length: " << rectangle.length << endl << "Width: " << rectangle.width << endl;
	return osObject;
}

istream & operator >> (istream& isObject, rectangleType& rectangle)
{
	isObject >> rectangle.length >> rectangle.width;
	return isObject;
}
