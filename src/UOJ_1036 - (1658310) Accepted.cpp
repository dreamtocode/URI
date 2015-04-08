#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c, d, e, f;
	cin>>a>>b>>c;
	d=(pow(b,2)-(4*a*c));
    e=(-b+sqrt(d))/(2*a);
    f=(-b-sqrt(d))/(2*a);
	cout<<fixed<<setprecision(5);
	if(a!=0 && d>0) {
	    cout<<"R1 = "<<e<<"\n";
    	cout<<"R2 = "<<f<<"\n";		
	}
    	         else {
    	             cout<<"Impossivel calcular\n";     	             
    	         }
    return 0;
}