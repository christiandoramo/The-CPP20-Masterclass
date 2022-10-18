#include <iostream>
using namespace std;
#include <string>

int main(){
    int Decimal = 023; // X C-> 0-9
    int Octal = 027; // 0X C-> 0-7
    int Hexadecimal = 0x017; // 0x0XX C-> 0-F(15)
    int Binary = 0b00010111; // 0bXXXX.XXXX.XXXX.XXXX C-> 0-1

    //size of int variables 4 bytes - 16 bits de memoria cada
    // short int -> 2 bytes
    //size of double variables 8 bytes or more
    cout<<"Decimal 23 = "<< Decimal << " SIZE = "<< sizeof(Decimal) << endl;
    cout<<"SIZE of 10,5555= "<< sizeof(10.5555) << endl; //8 bytes
    cout<<"Octal 027 = "<< Octal << " SIZE = "<< sizeof(Octal)<< endl;
    cout<<"Hexadecimal 0x017 = "<< Hexadecimal<<" SIZE = "<< sizeof(Hexadecimal)<< endl;
    cout<<"Binary 0b00010111 = "<< Binary<<" SIZE = "<< sizeof(Binary)<< endl;
}