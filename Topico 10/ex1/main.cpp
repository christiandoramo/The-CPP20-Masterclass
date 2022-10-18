#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Type a Integral number" << endl;

    int num;

    cin >> num;

    string evenOrOdd = num % 2 == 0 ? to_string(num) + " is Even" : to_string(num) + " is Odd";

    // num + is Even => int + string => results a STRANGE char sequence in C++
    // with auto type instead of string type the int value is ignored
    
    cout << evenOrOdd << endl;

    return 0;
}