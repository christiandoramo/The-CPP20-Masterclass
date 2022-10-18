#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int col{8};
    cout << left << setfill('_');                                                    // usa <iomanip>
    cout << setw(2) << "red" << setw(col) << "blue" << setw(col) << "green" << endl; // usa <iomanip>
    //"red" não acrescentou _ espaço algum
    cout << setw(col) << "yellow" << setw(col) << "pink" << setw(col) << "purple" << endl;
    cout << internal;  // manda dados para um lado e sinal para outro
    cout << showpoint; // apenas funciona com flutuantes
    double num = 100;
    cout << setw(col) << -100 << setw(col) << num << setw(col) << "ollla" << endl;
    return 0;
    // checar referencias c++ caso pedir por diretiva ou não identificar para incluir a biblioteca/library
}