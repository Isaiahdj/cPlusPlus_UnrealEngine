#include "Shape.h"
#include <iostream>
using namespace std;

/************************************************************
*************************************************************
**** This is My Functions for my Shape class and all its ****
**** children                                            ****
**************************************************************
**************************************************************/


//This function gets the area of each shape and is called in all the other functions
double Shape:: getArea(double x, double y, bool isTriangle) {
	double area;
	if (y == 0) {
		double pi = 3.14;
		area = pi * (x * x);
	}
	else if (isTriangle == true) {
		area = (x * y) / 2;
	}
	else {
		area = x * y;
	}
	return area;
}

void Rectangle::rectangle() {


	cout << " __ __ __ __ __ __ __ __ __ __ __ \n";
	cout << "|                                |\n";
	cout << "|                                |\n";
	cout << "|                                |\n";
	cout << "|                                |\n";
	cout << "|                                |\n";
	cout << "|__ __ __ __ __ __ __ __ __ __ __|\n\n";

	cout << "          Color: " << Rectangle::Color << "\n";
	cout << "          Height: " << Rectangle::Height << "\n";
	cout << "          Width: " << Width << "\n";
	cout << "          Area: " << getArea(Height, Width) << "\n\n\n";

}

void Triangle::triangle() {


	cout << "                 /\\ \n";
	cout << "                /  \\ \n";
	cout << "               /    \\ \n";
	cout << "              /      \\ \n";
	cout << "             /        \\ \n";
	cout << "            /          \\ \n";
	cout << "           /            \\ \n";
	cout << "          /              \\ \n";
	cout << "         /                \\ \n";
	cout << "        /                  \\ \n";
	cout << "       /                    \\ \n";
	cout << "      /__ __ __ __ __ __ __ _\\ \n\n\n";

	cout << "          Color: " << Triangle::Color << "\n";
	cout << "          Height: " << Triangle::Height << "\n";
	cout << "          Base: " << Base << "\n";
	cout << "          Area: " << getArea(Height, Base, isTriangle) << "\n\n\n";
}

void Circle::circle() {
				  
	cout << "         * * * * *  \n";
	cout << "       *            * \n";
	cout << "     *                * \n";
	cout << "    *                  * \n";
	cout << "   *                    * \n";
	cout << "   *                    * \n";
	cout << "   *                    * \n";
	cout << "    *                  * \n";
	cout << "     *                * \n";
	cout << "       *             * \n";
	cout << "          * * * * * \n\n";

	cout << "          Color: " << Circle::Color << "\n";
	cout << "          Radius: " << Radius << "\n";
	cout <<	"          Area: " << getArea(Radius) << "\n\n\n";
}