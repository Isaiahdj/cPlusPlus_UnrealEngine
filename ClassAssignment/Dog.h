#pragma once
#include <string>
using namespace std;


/************************************************************
*************************************************************
**** This is My Header file here I Declare The Dog class ****
**** and give it properties and methods                  ****
**************************************************************
**************************************************************/

class Dog
{
	public:
		string Breed;
		string Color;
		int Height;
		int Weight;

		//Functions that are layed out in the Dog.cpp file
		void Shake();
		void Sit();
		void LayDown();
		void Dogo();
};

