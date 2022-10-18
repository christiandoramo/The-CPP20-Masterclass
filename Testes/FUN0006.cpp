#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<< log2(8)<<endl; //logaritmo do logaritmando 8(a) na base 3(b) é igual ao logaritmo 3(x)
    cout<< log10(10)<<endl; //log10 log2              log sozinho é = logE e=numero de euler
    cout<< pow(10,1)<<endl; // base elevado ao expoente = a potencia
    cout<< abs(-10.555)<<endl; // sem negativo
    cout<< sqrt(16)<<endl; // raiz quadrada = expoente 1/2 = raíz de indice 2
    cout<< ceil(-10.555)<<endl; // nunca arredonda para abaixo do valor dado ceil=teto
    cout<< round(-10.555)<<endl; // arredonda  de 5 acim para mais e de menos para menos
    cout<< floor(-10.555)<<endl; // nunca arredonda para acima do valor dado floor=piso
    return 0;
}