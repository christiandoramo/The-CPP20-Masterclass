#include <iostream>
using namespace std;

int multiply (int num1, int num2){
int product = num1 * num2;
return product;
}

int main(){
    int A = 10, B= 20;
    int result = multiply(A,B);
    std::cout<<"The product is "<< result<<std::endl;
    return 0;
}