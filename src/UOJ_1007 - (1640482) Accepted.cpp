#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, c, d, m;
	cin>>fixed>>setprecision(1);
	cin>>a>>b>>c>>d;
	m=(a*b-c*d);
	cout<<"DIFERENCA = "<<m<<endl;
	return 0;
}