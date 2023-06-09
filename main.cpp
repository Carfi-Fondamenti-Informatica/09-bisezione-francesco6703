#include <iostream>
#include <cmath>

using namespace std;

double f(double y) {
    return y * y * cos(y) + 1;
}

double bisezione(double a, double b, double tolleranza) {
    double c;

    while (fabs((b - a)/2) > tolleranza) {
        c = (a + b) / 2;  

        if (f(c) == 0)
        {
        	return c;
		}
        else if (f(c) * f(a) < 0)
        {
        	b=c;
		}
        else
        {
        	a=c;
		}
    }

    return c;  
}

int main() {
    double a, b;
double radice= (radice*10000)/10000;


    double tolleranza = 1e-6;  

    cout << "inserire estremi" << endl;
    cin >> a;
    cin >> b;
	while(f(a)*f(b)>0)
	{
   cout << "inserire estremi" << endl;
		cin >> a;
        cin >> b;
	}
radice = bisezione(a, b, tolleranza);
	cout.precision(4);
    cout << radice;

    return 0;
}
