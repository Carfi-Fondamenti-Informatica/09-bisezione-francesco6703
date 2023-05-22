#include <iostream>
#include <cmath>

using namespace std;

float f(float y) {
    return y * y * cos(y) + 1;
}

float bisezione(float a,float b, float err)
{
	float c;
	int i; 
	int n=0;
	
 while(n <= i)
{
	c = (a + b)/2; 
  	if (f(c) == 0 || (b-a)/2 < err )
  	{
  		return c;
  	}
  	else if (f(c)*f(a) < 0)
        {
        	b=c;
		}
        else
        {
        	a=c;
		}
	n=n+1;
}
	return c;
}



int main() {
    float a, b;
    float err = 1e-6;  
    int i;
	cin >> i; 
    cout << "inserire estremi";
    cin >> a;
    cin >> b;
	while(f(a)*f(b)>0)
	{
		cin >> a;
        cin >> b;
	}
    float radice = bisezione(a, b, err);
	cout.precision(4);
    cout << radice << "\n";
    cout << f(radice);

    return 0;
}
