#include <iostream>

int main()
{
    unsigned char age{97};
    std::cout << "char age = 97 == char age = " << age << std::endl;
    char teste = 1;
    age = 257;
    std::cout << "char teste = 1 >> " << teste << std::endl;
    std::cout << "overflow | age = 255(255 + 1 = 0| +1 = 1) +2 >>" << age << std::endl;
    age = -2;
    teste = 254;
    std::cout << "char teste = 254 >> " << teste << std::endl;
    std::cout << "underflow | age = 256 ou 0 -2 = 254(inversion increment ) >>" << age << std::endl;
    std::cout<<std::endl;
    age = 97;
    std::cout << "age = 97 >> " << age << std::endl;
    age = 97 + 1;
    std::cout << "age = 97 + 1 >> " << age << std::endl;
    age = 'a' + 1;
    std::cout << "age = 'a'+ 1 >> " << age << std::endl;

    return 0;
}