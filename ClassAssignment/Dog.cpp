#include "Dog.h"
#include <iostream>
using namespace std;

/************************************************************
*************************************************************
**** This is My Functions for the Dog class are so take  ****
**** a look to see the functions I call in the Main()    ****
**************************************************************
**************************************************************/

void Dog:: Dogo() {

	cout << "  _                                / \\ \n";
	cout << " | \\_	                         _/   \\ _ \n";
	cout << "  \\_ \\_                       _/         \\ _ \n ";
	cout << "   \\_ \\__ __ __ __ __ __ __ /		     | \n ";
	cout << "     \\                             _ __ __ /  \n ";
	cout << "      |                           / \n ";
	cout << "      |                          / \n ";
	cout << "      |                         / \n";
	cout << "       |     __ __ __ __ __     | \n";
	cout << "       |    |              |    | \n";
	cout << "       |    |              |    | \n";
	cout << "       |__ __\\             |__ __\\ \n\n";

						//Gets these properties from the Dog.H file where the class was declared
	cout << "            Breed: " << Dog::Breed << '\n';
	cout << "            Color: " << Dog::Color << '\n';
	cout << "            Height: " << Dog::Height << " feet \n";
	cout << "            Weight: " << Dog::Weight << " pounds \n\n\n";

}

void Dog::Shake() {


	cout << "  _                                / \\ \n";
	cout << " | \\_	                         _/   \\ _ \n";
	cout << "  \\_ \\_                       _/         \\ _ \n ";
	cout << "   \\_ \\__ __ __ __ __ __ __ /		     | \n ";
	cout << "     \\                             _ __ __ /  \n ";
	cout << "      |                           / \n ";
	cout << "      |                          / \n ";
	cout << "      |                          \\__ /| \n";
	cout << "       |     __ __ __ __ __ __         | \n";
	cout << "       |    |                 \\__ __ __| \n";
	cout << "       |    | \n";
	cout << "       |__ __\\ \n\n";

	cout << "Your Dog Lifted up his Paw to shake your hand \n\n\n";
}

void Dog::Sit() {

	cout << "                                     / \\ \n";
	cout << "                                   _/   \\ _ \n";
	cout << "                                 _/         \\ _ \n ";
	cout << "                __ __ __ __ __ /              | \n ";
	cout << "              /                      _ __ __ /  \n ";
	cout << "             /                     / \n ";
	cout << "            /                     / \n ";
	cout << "           /                     / \n";
	cout << "         _/ __       __ __ __    | \n";
	cout << "       _/ _/  |      /|     |    | \n";
	cout << "     _/ _/     \\      |     |    | \n";
	cout << "    |_ /        \\__ __|     |__ __\\ \n\n";

	cout << "Your Dog decides it is time to sit \n\n\n";
}

void Dog::LayDown() {


	cout << "                                  / \\ \n";
	cout << "                                _/   \\ _ \n";
	cout << "        __ __ __ __ __ __ __ _/         \\ _ \n ";
	cout << "      /                                   | \n ";
	cout << "    _/                           _ __ __ /  \n ";
	cout << "  _/ _                          / \n";
	cout << " _/ _/ |    __/|__ __ __ __    /_/| \n";
	cout << "|_ /   \\       |           \\      | \n";
	cout << "         \\__ __|            \\__ __| \n\n";

	cout << "Your Dog is tired so it decides it needs to lay down \n\n\n";
}