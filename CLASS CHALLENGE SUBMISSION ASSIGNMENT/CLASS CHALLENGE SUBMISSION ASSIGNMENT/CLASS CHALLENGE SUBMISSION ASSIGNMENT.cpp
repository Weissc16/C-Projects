// CLASS CHALLENGE SUBMISSION ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

class myShape {
public:
    string Color;

    void getArea();
};

    class Circle : public myShape {
        string Color = "Blue";
        int Radius;
        void getArea(int Radius) {
            cout << 0.5 * (Radius * Radius);
        }
    };

    class Triangle : public myShape {
        string Color = "Yellow";
        int Base;
        int Height;
        void getArea(int Height, int Base) {
            cout << 0.5 * (Base * Height);
        }
    };

    class Rectangle : public myShape {
        string Color = "Red";
        int Height;
        int Width;
        void getArea(int Height, int Width) {
            cout << Height * Width;
        }
    };

int main()
{
    Rectangle.getArea(int 10, int 20);

    Circle.getArea(int 50);

    Triangle.getArea(int 17, int 12);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
