#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c=4, d=4.5, e=5, f=2, l=1.5, m;
	cin>>a>>b;
	cout<<fixed<<setprecision(2);
	if(a==1) {
		m=b*c;
	    cout<<"Total: R$ "<<m<<"\n";
	}
		    if(a==2) {
			m=b*d;
		    cout<<"Total: R$ "<<m<<"\n";
		    }
			    if(a==3) {
				m=b*e;
			    cout<<"Total: R$ "<<m<<"\n";
			    }
				    if(a==4) {
					m=b*f;
				    cout<<"Total: R$ "<<m<<"\n";
				    }
					    if(a==5) {
						m=b*l;
					    cout<<"Total: R$ "<<m<<"\n";
					    }
	return 0;
}