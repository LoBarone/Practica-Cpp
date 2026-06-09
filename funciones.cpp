#include <iostream>
using namespace std;

int calcularProducto(int n1, int n2) {
    return (n1 * n2);
}


void intercambiar(int &n1, int &n2) {
    int aux = n1;
    n1 = n2;
    n2 = aux;
}


