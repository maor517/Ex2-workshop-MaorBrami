#include "Point.h"
#include <iostream>


int main()
{
	Point p1(1, 2);
	Point p2 = p1;

	std::cout << "p1= " << p1 << std::endl; // added << p1 to print the p1 object
	std::cout << "p2= " << p2 << std::endl; // added << p2 to print the p2 object

	return 0;
}
