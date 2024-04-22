#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int a,c,n,jumlah;
    c=1;
    jumlah=0;

    cout<<"input jumlah suku yang mau dihitung: ";
    cin>>n;

    for ( a = 1; a <= n ; a++)
    {
        c=0; 
        if (a % 2 == 0)
        {
            c=a*a;
            jumlah+=c;
        } 
    }
    cout<<endl<<jumlah;
    
    return 0;
}