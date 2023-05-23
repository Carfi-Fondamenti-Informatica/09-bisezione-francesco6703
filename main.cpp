#include <iostream>
#include <cmath>
using namespace std;

double funzione(double y) {
    return y * y * cos(y) + 1;
}

double Bisezione(double a, double b) {
    double risultato = 0;
    double epsilon = 1e-6; // Tolleranza

    if (funzione(a) * funzione(b) >= 0) {
        return risultato;
    }

    while ((b - a) >= epsilon) {
        double c = (a + b) / 2; // Punto medio

        if (funzione(c) == 0.0) {
            risultato = c;
            break;
        }
        else if (funzione(c) * funzione(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }

    risultato = (a + b) / 2;
    return risultato;
}

int main() {
    double a, b;
    cout << "Inserire gli estremi";
    cin >> a >> b;

    double radice = Bisezione(a, b);

    if (radice != 0) {
	cout.precision(4);
        cout << radice;
    }
    return 0;
}
