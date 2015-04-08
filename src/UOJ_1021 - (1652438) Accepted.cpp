#include <iostream>
using namespace std;

int main() {    
long double a;
    int b, c, d;
    cin >> a;
    b = a;
    a = 100*a;
    d = a; 
    cout << "NOTAS:\n";
    cout << b/100 << " nota(s) de R$ 100.00\n";
    c = (b%100);
    cout << c/50 << " nota(s) de R$ 50.00\n";
    c %=50;
    cout << c/20 << " nota(s) de R$ 20.00\n";
    c %=20;
    cout << c/10 << " nota(s) de R$ 10.00\n";
    c %=10;
    cout << c/5 << " nota(s) de R$ 5.00\n";
    c %=5;
    cout << c/2 << " nota(s) de R$ 2.00\n";
    c %= 2;
    cout << "MOEDAS:\n";
    cout << c/1 << " moeda(s) de R$ 1.00\n";
    d %=100;
    cout <<  d/50 << " moeda(s) de R$ 0.50\n";
    d %= 50;
    cout <<  d/25 << " moeda(s) de R$ 0.25\n";
    d %= 25;
    cout <<  d/10 << " moeda(s) de R$ 0.10\n";
    d %= 10;
    cout <<  d/5 << " moeda(s) de R$ 0.05\n";
    d %= 5;
    cout <<  d/1 << " moeda(s) de R$ 0.01\n";
    return 0;
}

