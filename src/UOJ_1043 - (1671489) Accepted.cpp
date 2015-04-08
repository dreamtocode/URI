#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float  a, b, c, d, e, f;
	cin>>fixed>>setprecision(1);
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(1);
	
	if( a-c < 0 )
	  d=c-a;
	else
	  d=a-c;
	 
	if( b-a < 0 )
	  e= a-b;
	else 
	  e= b-a;
	 
	if( b-c < 0 )
	  f= c-b;
	else
	  f= b-c;
	 
	if(f < a && a < (b+c) && e < c && c < (a+b) && d < b && b< (a+c))
	
		cout<<"Perimetro = "<<a+b+c<<"\n";
	else
		cout<<"Area = "<<((a+b)*c)/2.0<<"\n";
		
	return 0;
}