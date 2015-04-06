#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a;
	double pi=3.14159, m;
	cin>>a;
	m=4.0/3*pi*a*a*a;
	cout<<"VOLUME = "<<fixed<<setprecision(3)<<m<<endl;
	return 0;
}