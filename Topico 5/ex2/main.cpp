/* Write a program that reads in the length and width and height of a box and computes the
base area and volume using the following formulas:

base_area = width * length
volume = base_area * height
*/

#include <iostream>

int main()
{
    std::cout << "Type the box length:";
    double l;
    std::cin >> l;

    std::cout << "Type the box width:";
    double w;
    std::cin >> w;

    std::cout << "Type the box height:";
    double h;
    std::cin >> h;

    double b_A = w * l;
    double v = b_A * h;

    std::cout << "The base area: " << b_A<< std::endl;//apparently doesnt exists the "cm²" in ASCII;
    std::cout << "The volume: " << v << "\n"; //apparently doesnt exists the "cm³" in ASCII

    return 0;
}