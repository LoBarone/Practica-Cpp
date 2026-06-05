#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    if (argc != 3) {
        cout <<  "Usage: area-triangulo <base> <altura>" << endl;
        return 1;
    }

    int base = stoi(argv[1]);
    int altura = stoi(argv[2]);
    double area = (base * altura) / 2.0;
    cout << "El area del triangulo es: " << area << endl;
    return 0;
} 