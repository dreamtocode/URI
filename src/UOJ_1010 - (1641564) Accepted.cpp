#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, d, e;
	float c, f, m;
	cin>>a>>b;
	cin>>fixed>>setprecision(2);
	cin>>c;
	cin>>d>>e;
	cin>>fixed>>setprecision(2);
	cin>>f;
	m=b*c+e*f;
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<m<<endl;
	return 0;
}