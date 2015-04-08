#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
	cin>>a>>b>>c>>d;
	e=c+d;
	f=a+b;
	if(b>c && d>a && e>f && c>0 && d>0 && a%2==0) 
			cout<<"Valores aceitos\n";
		      else if(1)
                	cout<<"Valores nao aceitos\n"; 
    return 0;
}