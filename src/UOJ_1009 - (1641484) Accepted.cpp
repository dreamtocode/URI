#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string name;
	double a, b, m;
	cin>>name;
	cin>>a>>b;
	m=a+(b*0.15);
	cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<m<<endl;
	return 0;
}