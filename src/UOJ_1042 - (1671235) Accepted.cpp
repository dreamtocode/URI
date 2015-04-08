#include <iostream>
using namespace std;
 
int main()
{
    int   a[3], b, i, j, c, d, e;
    cin>>c>>d>>e;
    a[0]=c;
    a[1]=d;
    a[2]=e;
    for (i = 0; i < 3; ++i)
    {
        for (j = i + 1; j < 3; ++j)
        {
            if (a[i] > a[j])
            {
                b =  a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<"\n\n";   
    cout<<c<<endl<<d<<endl<<e<<endl;    
    return 0;
}
