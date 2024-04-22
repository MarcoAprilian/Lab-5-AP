#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int a,b,c,jumlah;
    b=1;
    c=1;

    cout<<"input jumlah suku yang mau dibuat: ";
    cin>>jumlah;

    for ( a = 1; a < jumlah ; a++)
    {
        if (b % 2 == 1)
        {
            c += 5;
        } else
        {
            c+=3;
        }
    cout<<c<<" ";        
    b++;
    }
    
    
    return 0;
}