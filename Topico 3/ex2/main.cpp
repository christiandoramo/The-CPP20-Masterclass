/*
Write a C++ program that asks which country the user lives in, lets the user type in the country and  and prints out a message
I've heard great things about [Country]. I'd like to go there sometime.
Example run :
Program prints : Where do you live?
User types : Finland
Program prints : I've heard great things about Finland. I'd like to go sometime.
Hints :
You'll need to use std::cout to print things out, and std::cin to get data input from the user
Perguntas dessa tarefa
What does the solution for your source code look like?
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string country;
    cout << "Where do you live?" << endl;
    getline(cin, country);
    cout << "I've heard great things about " << country << ". I'd like to go sometime." << endl;
    return 0;
}