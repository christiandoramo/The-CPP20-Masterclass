#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    string day;
    string last_day;
    int days_passed;
    int col = 15;

    cout << endl;
    cout << setw(col) << " 1: Monday " << setw(col) << " 2: Tuesday " << setw(col) << " 3: Wednesday " << setw(col) << " 4: Thursday " << setw(col) << " 5: Friday " << setw(col) << " 6: Saturday " << setw(col) << " 7: Sunday " << endl;
    cout << endl;
    cout << "Enter the number of the Day 1-7" << endl;

    int num;
    cin >> num;
    cout << "How many days passed up?" << endl;
    cin >> days_passed;

    if (num > 0 && num < 8)
    {
        // calcules the differences current day and old day
        int K = num - (days_passed % 7) > 0 ? num-(days_passed % 7) : num-(days_passed % 7) + 7;
        switch (K)
        {
        case 1:
            last_day = "Monday";
            break;
        case 2:
            last_day = "Tuesday";
            break;
        case 3:
            last_day = "Wednesday";
            break;
        case 4:
            last_day = "Thursday";
            break;
        case 5:
            last_day = "Friday";
            break;
        case 6:
            last_day = "Saturday";
            break;
        case 7:
            last_day = "Sunday";
            break;
        default:
            last_day = "";
        break;
        }
    }

    switch (num)
    {
    case 1:
        day = "Monday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 2:
        day = "Tuesday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 3:
        day = "Wednesday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 4:
        day = "Thursday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 5:
        day = "Friday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 6:
        day = "Saturday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 7:
        day = "Sunday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    default:
        cout<<"The number is a Invalid day"<<endl;
    break;
    }

    return 0;
}