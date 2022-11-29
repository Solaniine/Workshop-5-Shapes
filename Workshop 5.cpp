using namespace std;
#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

int main(void)
{
	
	Rectangle Rectangle2;
	Rectangle2.Width(21);
    Rectangle2.Height(15);


	cout << "total area:" << Rectangle2.Area() << endl;


	return 0;
}