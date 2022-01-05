/*


    Title: ClassAssignment (Dog Class)
    Name: Isaiah Johnson
    Date 1/5/2022
    description: This program was made to practice with class inheritance. I
                 built three child classes base off the 1 parent class and gave
                 each one different properties. as well as set up a method with
                 optional parameters for the classes to inherit

 */

#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
    /**********************************************
    ******************   OBJECTS   ****************
    ***********************************************/

    Rectangle rect;
    rect.Color = "Orange";
    rect.Height = 7;
    rect.Width = 5;

    Triangle tri;
    tri.Color = "Purple";
    tri.Height = 7;
    tri.Base = 5;

    Circle circ;
    circ.Color = "Blue";
    circ.Radius = 3;


    /**********************************************
    **************   FUNCTION CALLS   *************
    ***********************************************/

    cout << "Press enter to see your first shape \n";
    cin.ignore();
    rect.rectangle();

    cout << "Press enter to see your second shape\n";
    cin.ignore();
    tri.triangle();

    cout << "Press enter to see your last shape \n";
    cin.ignore();
    circ.circle();
}