#include "rectangleType.h"


/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Rectangle class for testing operator overloading
* March 22, 2017 */

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
	if ((length - 1) <= 0 || (width - 1) <= 0)
	{
		cout << "**Dimensions must be positive. No changes made**" << endl;
	}
	else
	{
		--length;
		--width;
	}
	return temp;
}

rectangleType rectangleType::operator--()
{
	if ((length - 1) <= 0 || (width - 1) <= 0)
	{
		cout << "**Dimensions must be positive. No changes made**" << endl;
	}
	else
	{
		--length;
		--width;
	}
	return *this;
}

bool rectangleType::operator>(const rectangleType & aRectangle) const
{
	bool result = false;

	if (length > aRectangle.length && width > aRectangle.width)
	{
		result = true;
	}

	return result;
}

bool rectangleType::operator<(const rectangleType & aRectangle) const
{
	bool result = false;

	if (length < aRectangle.length && width < aRectangle.width)
	{
		result = true;
	}

	return result;
}

bool rectangleType::operator>=(const rectangleType & aRectangle) const
{
	bool result = false;

	if (length >= aRectangle.length && width >= aRectangle.width)
	{
		result = true;
	}

	return result;
}

bool rectangleType::operator<=(const rectangleType & aRectangle) const
{
	bool result = false;

	if (length <= aRectangle.length && width <= aRectangle.width)
	{
		result = true;
	}

	return result;
}

rectangleType rectangleType::operator-(const rectangleType& aRectangle) const
{
	rectangleType temp;

	if ((length - aRectangle.length) <= 0 || (width - aRectangle.width) <= 0)
	{
		cout << endl << "Error! All dimensions must remain > 0 after subtraction." << endl
			<< "Aborting subtraction." << endl;
	}
	else
	{
		temp.length = length - aRectangle.length;
		temp.width = width - aRectangle.width;
	}

	return temp;
}

rectangleType rectangleType::operator/(const rectangleType & aRectangle) const
{
	rectangleType temp;

	if (aRectangle.length == 0 || aRectangle.width == 0)
	{
		temp.length = 0;
		temp.width = 0;
		cout << endl << "Error! Can not divide by 0." << endl
			<< "Aborting division. newRectangle is now 0x0" << endl;
	}
	else
	{
		temp.length = length / aRectangle.length;
		temp.width = width / aRectangle.width;
	}

	return temp;
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
