#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t, s;
	double d, c=12;
	cin>>t>>s;
	d=(t*s)/c;
	cout<<fixed<<setprecision(3)<<d<<endl;
	return 0;
}