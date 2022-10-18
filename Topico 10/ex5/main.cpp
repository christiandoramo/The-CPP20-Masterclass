/*
You'll write a C++ program that prompts the user to enter their location point (x, y) .
The program will check whether the point is within the rectangle centered at (0, 0) with width of 20 and height 10.
*/
#include <iostream>

using namespace std;
int main()
{
    int x, y;
    int width{20}, height{10};
    int minX = -width / 2, maxX = width / 2;
    int minY = -height / 2, maxY = height / 2;
    cout << "\nEnter the location points in the 20x10 rectangle centered at (0, 0)";
    cout << "\n\nEnter the location point x\n";
    cin >> x;
    cout << "Enter the location point y" << endl;
    cin >> y;

    if (x >= minX && x <= maxX && y >= minY && y <= maxY)
    {
        cout << "Position: (" << x << ", " << y << ")\n"
             << "You are completely surrounded. Don't move!" << endl;
    }
    else
    {
        cout << "Position: (" << x << ", " << y << ")\n"
             << "You're out of reach!" << endl;
    }

    return 0;
}