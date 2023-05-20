#include <iostream>
#include <cmath>

using namespace std;

float f(float y) {
    return y * y * cos(y) + 1;
}

float bisezione(float a, float b, float tolleranza) {
    float c;

    while (fabs(b - a) > tolleranza) {
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

    return (a + b) / 2;  
}

int main() {
    float a, b;
    float tolleranza = 1e-6;  

    cout << "inserire estremi";
    cin >> a;
    cin >> b;
	while(f(a)*f(b)>0)
	{
		cin >> a;
        cin >> b;
	}
    float radice = bisezione(a, b, tolleranza);

    cout << radice << endl;
    cout << f(radice);

    return 0;
}
