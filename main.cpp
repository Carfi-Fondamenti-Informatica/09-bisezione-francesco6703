#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a, b, fa, fb, x, fx;
	cout << "inserire estremi\n"; 
	cin >> a;
	cin >> b;
	fa=a*a*(cos(a))+1;
	fb=b*b*(cos(b))+1;
	
	while(fa*fb>=0)
	{
		cin >> a;
		cin >> b;
		fa=a*a*cos(a)+1;
		fb=b*b*cos(b)+1;
	}

	
	x=a;
	a=(a+b)/2;
	fa=a*a*cos(a)+1;
	do{
	if (fa*fb>0)
	{
		a=x;
		fa=a*a*cos(a)+1;
		b=(a+b)/2;
		fb=b*b*cos(b)+1;
	}
	else
	{
		x=a;
		a=(a+b)/2;
		fa=a*a*cos(a)+1;
	}
	}while (fa>0.1 && fa<-0.1 || fb>0.1 && fb<-0.1);
	cout << a << "\n";
	cout.precision(4);
	cout << fa;
    
}
