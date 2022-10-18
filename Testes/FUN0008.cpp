#include <iostream>
#include <bitset>

int main()
{
    int num{6};
    std::cout << std::bitset<16>(num) << std::endl;
    (num << 1);
    std::cout << std::bitset<16>(num) << std::endl;
    std::cout << std::bitset<16>(num << 1) << std::endl;
    std::cout << std::bitset<16>(num) << std::endl;
    std::cout << std::bitset<16>(num >> 1) << std::endl;
    std::cout << std::endl;
    num = (num>>2); //num realmente vai andar 2 bits para direita sendo 0110 dividido por 2^n no caso n=2bits
    std::cout << std::bitset<16>(num) << std::endl;
    // perceba que num perdeu para sempre o BIT de valor 1
    num = (num<<2); //num vai andar 2 bits para esquerda sendo 0001 multplicado por 2^n no caso n=2bits será 0100
    std::cout << std::bitset<16>(num) << std::endl;

    return 0;
}