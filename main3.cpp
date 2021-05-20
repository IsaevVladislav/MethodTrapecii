#include <iostream>
#include <math.h>
using namespace std;
 
double f(double x)
{
	return (((1.6*x-3.8)/(1.2*x*x*x+1.7));	
}
 
int main() {
	double a, b, n;
	cin >> a >> b >> n;
	double I=n+1, I1=0;
	for (int N=2; (N<=4)||(fabs(I1-I)>n); N*=2)
	{
		double h, sum2=0, sum4=0, sum=0;
		h=(b-a)/(2*N);
		for (int i=1; i<=2*N-1; i+=2)
		{   
			sum4+=f(a+h*i);
			sum2+=f(a+h*(i+1));
		}
		sum=f(a)+4*sum4+2*sum2-f(b); 
		I=I1;
		I1=(h/3)*sum;
	}
	cout << I1 << endl;
	return 0;
}
