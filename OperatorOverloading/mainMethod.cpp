/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Operator overloading program
* March 22, 2017 */

#include <iostream>
#include "info.h"
#include "rectangleType.h"

using namespace std;

void main()
{
	info myInfo("Paul Heintz", 4, "Operator Overloading");
	myInfo.displayInfo();

	cout << "** Creating myRectangle and yourRectangle... **" << endl;
	rectangleType myRectangle(22, 45);
	rectangleType yourRectangle;

	cout << endl << "** Overloaded >> **" << endl;
	cout << "Enter your rectangle's length" << endl << "and width seperated with a space: ";
	cin >> yourRectangle;

	cout << endl << "** Overloaded << **" << endl;
	cout << endl << "myRectangle:" << endl;
	cout << myRectangle;
	cout << endl << "yourRectangle:" << endl;
	cout << yourRectangle << endl;

	cout << "** myRectangle pre-increment, yourRectangle post-increment **" << endl;
	++myRectangle;
	yourRectangle++;
	cout << myRectangle << endl;
	cout << yourRectangle << endl;

	cout << "** myRectangle post-decrement, yourRectangle pre-decrement **" << endl;
	myRectangle--;
	--yourRectangle;
	cout << myRectangle << endl;
	cout << yourRectangle << endl;
}