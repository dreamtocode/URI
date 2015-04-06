#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, p=3.14159;
	cin>>b;
	a=b*b*p;
	cout<<(fixed);
	cout<<"A="<<setprecision(4)<<a<<endl;
	return 0;
}