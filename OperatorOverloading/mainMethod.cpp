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

	rectangleType myRectangle(5, 4);
	myRectangle.print();

	cin.ignore();
}