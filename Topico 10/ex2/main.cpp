#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the user age" << endl;
    int age;
    cin >> age;
    if(age>=21){
        if(age<=39) cout<<"The user is eligible for the treatment\n";
        else{
                    cout<<"The user is not eligible for the treatment\n";
        }
    }
    else
        cout<<"The user is not eligible for the treatment\n";

        return 0;
}