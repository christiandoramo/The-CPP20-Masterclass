#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int col = 15;
    cout << setw(col) << " 1: Monday " << setw(col) << " 2: Tuesday " << setw(col) << " 3: Wednesday "
         << setw(col) << " 4: Thursday " << setw(col) << " 5: Friday " << setw(col)
         << " 6: Saturday " << setw(col) << " 7: Sunday " << endl << endl;
    cout << "Enter the number of the Day 1-7\n\n";
    int num;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "The day is Monday" << endl;
        break;
    case 2:
        cout << "The day is Tuesday" << endl;
        break;
    case 3:
        cout << "The day is Wednesday" << endl;
        break;
    case 4:
        cout << "The day is Thursday" << endl;
        break;
    case 5:
        cout << "The day is Friday" << endl;
        break;
    case 6:
        cout << "The day is Saturday" << endl;
        break;
    case 7:
        cout << "The day is Sunday" << endl;
        break;
    default:
        cerr << "It's a invalid day." << endl;
        break;
    }

    return 0;
}