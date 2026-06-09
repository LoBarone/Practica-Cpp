#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout << "Ingrese el primer número:" << endl;
    cin >> n1;

    cout << "Ingrese el segundo número:" << endl;
    cin >> n2;

    cout << "La suma es: " << n1 + n2 << endl;
    cout << "El producto es: " << n1 * n2 << endl;

    float prom = (n1 + n2) / 2.0;
    cout << "El promedio es: " << prom << endl; 
}