#include <iostream>
using namespace std;
#include <string>

int main(){
    cout<<"Digite seu nome completo"<<endl;
    string full_name;
    //getline (,) é semelhante ao console.readline no c#
    getline(cin,full_name);
    cout<<"Sua idade"<<endl;
    int idade;
    cin>>idade;
    cout<<"Nome Completo: "<< full_name << endl;
    cout<<"Idade: "<< idade << endl;
    return 0;
}