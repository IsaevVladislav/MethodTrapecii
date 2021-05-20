#include <iostream>
using namespace std;
 
double f(double x)
{
	return ((1.6*x-3.8)/(1.2*x*x*x+1.7));
}
int main() 
{
	double a,b;
	int n;
	cin>>a>>b>>n;
	double s=(f(a)+f(b))/2;
	double h=(b-a)/n;
	for (int i=1; i<=n-1; i++)
	{ 
		s+=f(a+i*h);
	}
	double I=h*s;
	cout<<I<<endl;
	
	return 0;
}
