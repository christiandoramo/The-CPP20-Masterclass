#include <iostream>

using namespace std;

int age {23}; //STATIC life_time scope 1
 
int main(){
    {
        int age {25}; //internal lifetime scope 1.2
        std::cout << "age : " << age << std::endl;//Scope 1.2
    
        {
            int age {27}; //scope 1.3 
            std::cout << "age : " << age << std::endl; //Scope 1.3
        }
    }
    std::cout << "age : " << age << std::endl;//scope 1.1
}


