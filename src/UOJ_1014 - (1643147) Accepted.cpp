#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, m;
	cin>>fixed>>setprecision(1);
	cin>>a>>b;
	m=a/b;
	cout<<fixed<<setprecision(3);
	cout<<m<<" km/l"<<endl;
	return 0;
}