#include <iostream>
#include <math.h>
using namespace std;
	double f(double x){return (((1.6*x-3.8)/(1.2*x*x*x+1.7));}
	double I(double a,double b,int n,double y){return ((b-a)/(2*n)*y);}
int main() {
	int n; double a,b,y,dy,In;
	cin>>a>>b>>n;
	if (n>1){
		dy=(b-a)/n;
		y+=f(a)+f(b);
		for (int i=1; i<n; i++) {y+=2*(f(a+dy*i));}
		In=I(a,b,n,y);
		cout << In;
	}
	else {cout << "Wrong data";}
}
