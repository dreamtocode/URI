#include <iostream>
using namespace std;
  
int main() {
    int a, b, c, d, st, fi;
    cin>>a>>b>>c>>d;
    fi=c-a;
    if( c-a <0 )
    fi=24+c-a;
     
    st=d-b;
    if( d-b <0 ) {
    st=60+d-b;
    fi--; }
    if( a==c && b==d )
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    else
        cout<<"O JOGO DUROU "<<fi<<" HORA(S) E "<<st<<" MINUTO(S)\n";
    return 0;
}