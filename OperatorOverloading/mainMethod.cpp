/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Operator overloading program
* March 22, 2017 */

#include <iostream>
#include <iomanip>
#include "info.h"
#include "rectangleType.h"

using namespace std;

void main()
{
	//Display info
	info myInfo("Paul Heintz", 4, "Operator Overloading");
	myInfo.displayInfo();

	//Instantiate rectangles
	cout << "** Creating myRectangle and yourRectangle... **" << endl;
	rectangleType myRectangle(22, 45);
	rectangleType yourRectangle;

	//Assign length and width to user rectangle
	cout << endl << "** Overloaded >> **" << endl;
	cout << "Enter your rectangle's length" << endl << "and width seperated with a space: ";
	cin >> yourRectangle;

	//Display rectangle sizes
	cout << endl << "** Overloaded << **" << endl;
	cout << endl << "myRectangle:" << endl;
	cout << myRectangle;
	cout << endl << "yourRectangle:" << endl;
	cout << yourRectangle << endl;

	//Increment rectangles
	cout << "** myRectangle pre-increment, yourRectangle post-increment **" << endl;
	++myRectangle;
	cout << "myRectangle:" << endl << myRectangle << endl;
	yourRectangle++;
	cout << "yourRectangle:" << endl << yourRectangle << endl;

	//Decrement rectangeles
	cout << "** myRectangle post-decrement, yourRectangle pre-decrement **" << endl;
	myRectangle--;
	cout << "myRectangle:" << endl << myRectangle << endl;
	--yourRectangle;
	cout << "yourRectangle:" << endl << yourRectangle << endl;

	//Compare rectangles
	cout << "** Checking comparison operators **" << endl;
	cout << "myRectangle > yourRectangle: ";
	if (myRectangle > yourRectangle)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	cout << "myRectangle < yourRectangle: ";
	if (myRectangle < yourRectangle)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	cout << "myRectangle >= to yourRectangle: ";
	if (myRectangle >= yourRectangle)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	cout << "myRectangle <= yourRectangle: ";
	if (myRectangle <= yourRectangle)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	//Create new rectangle from difference of others
	rectangleType newRectangle;
	cout << endl << "** Assigning difference of myRectangle - yourRectangle to newRectangle **" << endl;
	newRectangle = myRectangle - yourRectangle;
	if (newRectangle.getLength() == 0 || newRectangle.getWidth() == 0)
	{
		newRectangle++;
		cout << endl << "Created newRectangle as 1x1 and subtracted from myRectangle" << endl;
		newRectangle = myRectangle - newRectangle;
	}
	cout << "newRectangle:" << endl << newRectangle << endl;

	//Modify new rectangle from quotient of others
	cout << endl << "** Assigning quotient of myRectangle / yourRectangle to newRectangle **" << endl;
	newRectangle = myRectangle / yourRectangle;
	cout << "newRectangle:" << endl;
	cout << setprecision(2) << fixed << newRectangle << endl;
}