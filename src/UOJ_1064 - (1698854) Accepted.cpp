#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float a, c=0;
    int b=0;
    for(int i=0; i<6; i++){
        cin>>a;
        if(a>0){ 
        c+=a;
        b++;}   
    }
    cout<<b<<" valores positivos\n";
    cout<<fixed<<setprecision(1);
    cout<<c/b<<"\n";
    return 0;
}