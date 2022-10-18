#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main()
{
    int year, first_day, months{12}, days;
    unsigned int count_months{1}, count_days{1};

    unsigned int a{0};
    while (a < 1)
    {
        cout << "Type a year: ";
        std::cin >> year;
        if (year <= 0)
        {
            cout << "Please, type a valid year" << endl << endl;
            continue;
        }
        unsigned int b{0};
        while (b < 1)
        {
            cout << "Enter the first week day of this year in number format" << endl;
            cout << "[1 = Monday; 2 = Tuesday;...7 = Sunday;]: ";
            std::cin >> first_day;
            if (first_day > 7 || first_day < 1)
            {
                cout << "Please, type the day of the week in a number format" << endl;
                continue;
            }
            b++;
        }
        a++;
        cout << endl;
    };
    // if a leap year february += 1 day
    int leap_year = year % 4 == 0 ? 1 : 0;
    if (leap_year)
        cout << year << " is a leap year.\n"<< endl;
    cout << std::left << "Calendar for " << year << endl;
    while (count_months <= months)
    {
        switch (count_months)
        {
        case 1:
            cout << std::setw(21) << std::right << "--January--" << endl;
            days = 31;
            break;
        case 2:
            cout << std::setw(21) << std::right << "--February--" << endl;
            days = 28 + leap_year;
            break;
        case 3:
            cout << std::setw(21) << std::right << "--March--" << endl;
            days = 31;
            break;
        case 4:
            cout << std::setw(21) << std::right << "--April--" << endl;
            days = 30;
            break;
        case 5:
            cout << std::setw(21) << std::right << "--May--" << endl;
            days = 31;
            break;
        case 6:
            cout << std::setw(21) << std::right << "--June--" << endl;
            days = 30;
            break;
        case 7:
            cout << std::setw(21) << std::right << "--July--" << endl;
            days = 31;
            break;
        case 8:
            cout << std::setw(21) << std::right << "--August--" << endl;
            days = 31;
            break;
        case 9:
            cout << std::setw(21) << std::right << "--September--" << endl;
            days = 30;
            break;
        case 10:
            cout << std::setw(21) << std::right << "--October--" << endl;
            days = 31;
            break;
        case 11:
            cout << std::setw(21) << std::right << "--November--" << endl;
            days = 30;
            break;
        case 12:
            cout << std::setw(21) << std::right << "--December--" << endl;
            days = 31;
            break;
        }
        // print day markings
        cout << std::setw(6) << "Mon" << std::setw(6) << "Tue" << std::setw(6)
             << "Wed" << std::setw(6) << "Thu" << std::setw(6) << "Fri"
             << std::setw(6) << "Sat" << std::setw(6) << "Sun" << endl;
        // first day of months logic
        // days with blank spaces
        unsigned int spaces{0};
        for (unsigned int i{1}; i < first_day; i++)
        {
            cout << std::setw(6) << " ";
            spaces++;
        }
        first_day = ((first_day + days) % 7 != 0) ? (first_day + days) % 7 : 7;
        // next first day of the month will value this current first day + days inmonth % 7
        // print the days
        while (count_days <= days)
        {
            cout << std::setw(6) << count_days;
            count_days++;
            spaces++;
            if (spaces % 7 == 0) cout << endl;
        }
        count_days = 1;
        cout << endl << endl;
        count_months++;
    };

    return 0;
}