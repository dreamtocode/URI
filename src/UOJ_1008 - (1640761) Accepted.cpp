#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	double c, m;
	cin>>fixed>>setprecision(2);
	cin>>a>>b>>c;
	m=b*c;
	cout<<fixed<<setprecision(2);
	cout<<"NUMBER = "<<a<<endl;
	cout<<"SALARY = U$ "<<m<<endl;
	return 0;
}