// CLASS CHALLENGE SUBMISSION ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    myShape Rectangle;
    Rectangle.Color = "Red";
    Rectangle.Height = 10;
    Rectangle.Width = 15;
    Rectangle.getArea(10, 15);

    myShape Triangle;
    Triangle.Color = "Yellow";
    Triangle.Height = 7;
    Triangle.Width = 12;
    Triangle.getArea(7, 12);

    myShape Circle;
    Circle.Color = "Blue";
    int Radius = 15;
    Circle.getArea(1, 15);
}

class myShape {
public:
    string Color;
    int Height;
    int Width;

    void getArea(int Height, int Width) {
        cout << Height * Width;
    }
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
