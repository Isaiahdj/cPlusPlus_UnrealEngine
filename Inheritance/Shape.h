#pragma once
#include <string>
using namespace std;

/************************************************************
*************************************************************
*** This is My Header file here I Declare The Shape class ***
*** and the three cild clases and give them properties    ***
*** and methods                                           ***
**************************************************************
**************************************************************/

//Parent Class
class Shape
{
	public:
		string Color;
		//This method works with all the shapes because of the optional parameters
		double getArea(double x, double y = 0, bool isTriangle = false);
};

//Child Class
class Rectangle: public Shape
{
	public:
		double Width;
		double Height;
		void rectangle();

};

//Child Class
class Triangle : public Shape
{
	public:
		bool isTriangle = true;
		double Base;
		double Height;
		void triangle();

};

//Child Class
class Circle : public Shape
{
	public:
		double Radius;
		void circle();
};

