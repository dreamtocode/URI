#include <iostream>

using namespace std;
   
int main() {
    int a, b, c, d=0;
    cin >> a >> b;
    
    if(a>b) {
        c=b;
        b=a;
        a=c;   
    }
    
    for( int i=a; i<=b; i++ ) {
        if( i % 13 != 0 )
            d+=i;
    }
    
    cout << d << endl;
       
    return 0;
}