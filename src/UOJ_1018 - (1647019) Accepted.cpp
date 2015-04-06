#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	cout<<a<<endl;
	cout<<a/100<<" nota(s) de R$ 100,00\n";
	a %= 100;
	cout<<a/50<<" nota(s) de R$ 50,00\n";
	a %= 50;
	cout<<a/20<<" nota(s) de R$ 20,00\n";
	a %= 20;
	cout<<a/10<<" nota(s) de R$ 10,00\n";
	a %= 10;
	cout<<a/5<<" nota(s) de R$ 5,00\n";
	a %= 5;
	cout<<a/2<<" nota(s) de R$ 2,00\n";
	a %= 2;
	cout<<a/1<<" nota(s) de R$ 1,00\n";
	return 0;
}