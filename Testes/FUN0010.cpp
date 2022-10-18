#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    string day;
    int days_passed;
    int col = 15;
    int num_day;

    cout << endl;
    cout << setw(col) << " 1: Monday " << setw(col) << " 2: Tuesday " << setw(col) << " 3: Wednesday " << setw(col) << " 4: Thursday " << setw(col) << " 5: Friday " << setw(col) << " 6: Saturday " << setw(col) << " 7: Sunday " << endl;
    cout << endl;
    cout << "Enter the number of the Day 1-7" << endl;

    int num;
    cin >> num;
    cout << "How many days passed up?" << endl;
    cin >> days_passed;

    int K{days_passed % 7};

    // switch do valor de K - numero da diferença do dia da semana do dia antigo com o atual e achando o dia exato da semana em INT
    // switch the value of K - number of the difference between the day of the week of the old day and the current one and finding the exact day of the week in INT
    switch (K)
    {
    case 0:
        num_day = num;
        break;
    case 1:
        num_day = num > 1 ? num - 1 : 7;
        break;
    case 2:
        if (num < 2)
        {
            switch (num - 2)
            {
            case 0:
                num_day = 7;
                break;
            case -1:
                num_day = 6;
                break;
            }
        }
        else
        {
            num_day = num - 2;
        }

        break;
    case 3:
        if (num < 3)
        {
            switch (num - 3)
            {
            case 0:
                num_day = 7;
                break;
            case -1:
                num_day = 6;
                break;
            case -2:
                num_day = 5;
                break;
            }
        }
        else
        {
            num_day = num - 3;
        }

        break;
    case 4:
        if (num > 4)
        {
            num_day = num - 4;
        }
        else
        {
            switch (num - 4)
            {
            case 0:
                num_day = 7;
                break;
            case -1:
                num_day = 6;
                break;
            case -2:
                num_day = 5;
                break;
            case -3:
                num_day = 4;
                break;
            }
        }
        break;
    case 5:
        if (num > 5)
        {
            num_day = num - 5;
        }
        else
        {
            switch (num - 5)
            {
            case 0:
                num_day = 7;
                break;
            case -1:
                num_day = 6;
                break;
            case -2:
                num_day = 5;
                break;
            case -3:
                num_day = 4;
                break;
            case -4:
                num_day = 3;
                break;
            }
        }
        break;
    case 6:
        if (num > 6)
        {
            num_day = num - 6; // or num_day = 1;
        }
        else
        {
            switch (num - 6)
            {
            case 0:
                num_day = 7;
                break;
            case -1:
                num_day = 6;
                break;
            case -2:
                num_day = 5;
                break;
            case -3:
                num_day = 4;
                break;
            case -4:
                num_day = 3;
                break;
            case -5:
                num_day = 2;
                break;
            }
        }
        break;
    }
    // achando o dia da semana a partir do número INT de entrada
    // finding the day of the week from the input INT number
    switch (num)
    {
    case 1:
        day = "Monday";
        break;
    case 2:
        day = "Tuesday";
        break;
    case 3:
        day = "Wednesday";
        break;
    case 4:
        day = "Thursday";
        break;
    case 5:
        day = "Friday";
        break;
    case 6:
        day = "Saturday";
        break;
    case 7:
        day = "Sunday";
        break;
    default:
        cout << "It's a invalid day." << endl;
        break;
    }
    cout << endl;
    // switch para converter num_day em string last_day e imprimir as saídas
    // switch to convert num_day to string last_day and print the outputs
    switch (string last_day; num_day)
    {
    case 1:
        last_day = "Monday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 2:
        last_day = "Tuesday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 3:
        last_day = "Wednesday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 4:
        last_day = "Thursday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 5:
        last_day = "Friday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 6:
        last_day = "Satuday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    case 7:
        last_day = "Sunday";
        cout << "Today is " << day << ". If we went " << days_passed << " days in the past we would hit a " << last_day << endl;
        break;
    }

    return 0;
}