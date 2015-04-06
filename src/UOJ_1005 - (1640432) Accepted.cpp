#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, m;
	cin>>fixed>>setprecision(1);
	cin>>a>>b;
	m=((a*3.5)+(b*7.5))/(3.5+7.5);
	cout<<(fixed)<<setprecision(5);
	cout<<"MEDIA = "<<m<<endl;
	return 0;
}