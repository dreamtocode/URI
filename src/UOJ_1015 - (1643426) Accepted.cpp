#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, d, m;
	cin>>fixed>>setprecision(1);
	cin>>a>>b;
	cin>>fixed>>setprecision(1);
	cin>>c>>d;
	m=sqrt((pow((c-a),2)+(pow((d-b),2))));
	cout<<fixed<<setprecision(4);
	cout<<m<<endl;
	return 0;
}