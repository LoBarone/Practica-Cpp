#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: cantidad-de-cifras <numero>" << endl;
        return 1;
    }

    int numero = atoi(argv[1]);
    int cifras = trunc(log10(abs(numero))) + 1;
    cout << "La cantidad de cifras en " << numero << " es: " << cifras << endl;
    return 0;
}