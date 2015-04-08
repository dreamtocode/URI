#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a;
        if (a>=0.0 && a<=400.00)
            b = 0.15;
        if (a>=400.01 && a<=800.00)
            b = 0.12;
        if (a>=800.01 && a<=1200.00)
            b = 0.10;
        if (a>=1200.01 && a<=2000.00)
            b = 0.07;
        if(a>2000.01)
            b = 0.04;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<a+(a*b)<<endl;
        cout<<"Reajuste ganho: "<<(a*b)<<endl;
        cout<<setprecision(0)<<"Em percentual: "<<b*100<<" %"<<endl;
    }
