#include <iostream>
using namespace std;
int main(){
    int a = 5, b, c = 0;
    while(a--){
        cin>>b;
        if (b % 2 == 0)
            c++;
    }
    cout<<c<<" valores pares\n";

    return 0;
}