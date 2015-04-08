#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b, c, d;
    cin>>a>>b>>c;
    cin>>fixed>>setprecision(1);
    if (a < b) { d = a; a = b; b = d; }
        if (b < c) { d = b; b = c; c = d; }
            if (a < b) { d = a; a = b; b = d; }
 
    if (a >= b + c) cout<<"NAO FORMA TRIANGULO\n";
        else if (a*a==b*b+c*c) cout<<"TRIANGULO RETANGULO\n";
        else if (a*a>b*b+c*c) cout<<"TRIANGULO OBTUSANGULO\n";
        else if (a*a<b*b+c*c) cout<<"TRIANGULO ACUTANGULO\n";
 
    if (a==b && b==c) cout<<"TRIANGULO EQUILATERO\n";
        else if (a==b || b==c) cout<<"TRIANGULO ISOSCELES\n";
 
    return 0;
}