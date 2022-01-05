/*


	Title: ClassAssignment (Dog Class)
	Name: Isaiah Johnson
	Date 1/4/2022
	description: This program was made to practice with classes and objects. I built A dog class
				 an put it in a seperate file, as well as declared it in a header file linked to 
				 both my main file and the class file. I did that to be able to call the functions
				 in my class from my main file. My class dispays a picture of a dog made up of
				 strings and performing basic actions when a function is called.


*/

#include <iostream>
#include "Dog.h" // Including my header file that contains the decleration of the Dog class
using namespace std;

int main() {
	
	/**********************************************
	******************   OBJECTS   ****************
	***********************************************/
	
	Dog doggy; //Instanciating an object of the Dog class
	doggy.Breed = "Hound";	// Adding the dogs properties
	doggy.Color = "Brown";
	doggy.Height = 2;
	doggy.Weight = 60;

	
	/**********************************************
	**************   FUNCTION CALLS   *************
	***********************************************/
	
	doggy.Dogo();	// calling my dogo function that is in Dog.cpp
	cout << "Press enter to see you dog perform some actions \n\n";
	cin.ignore(); /*this is here to force the user to hit enter to move 
				  on so not everthing loads to the console at once */

	doggy.Shake(); // Calling my Shake function that is located in Dog.cpp
	cout << "Press enter to see you dog perform another action \n\n";
	cin.ignore();

	doggy.Sit(); // Calling my Sit function located in Dog.cpp
	cout << "Press enter to see you dog perform another action \n\n";
	cin.ignore();

	doggy.LayDown(); // Calling my LayDown function located in Dog.cpp

}