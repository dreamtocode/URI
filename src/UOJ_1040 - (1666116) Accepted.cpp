#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float a, b, c, d, e, f;
    cin>>fixed>>setprecision(1);
    cin>>a>>b>>c>>d;
    cin>>f;
    e=(a*2+b*3+c*4+d*1)/(10.0);
    cout<<fixed<<setprecision(1);
    cout<<"Media: "<<e<<"\n";
    if(e>=7.0)
    cout<<"Aluno aprovado.\n";
    if(e<5.0)
    cout<<"Aluno reprovado.\n";
    if(e>=5.0 && e<=6.9){
    cout<<"Aluno em exame."<<"\n";
    cout<<"Nota do exame: "<<f<<"\n";
    if((e+f)/2.0>=5.0)
    cout<<"Aluno aprovado.\n";
    else
    cout<<"Aluno reprovado.\n";
    cout<<"Media final: "<<(e+f)/2.0<<"\n";
    }
    return 0;
}