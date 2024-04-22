#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int n;

    cout<<"masukkan jumlah perulangan: ";
    cin>>n;
    
    if ((n >= 1) && (n <= 10000))
    {
        cout<<endl<<"H";
        for (int i = 0; i < n; i++)
        {
            cout<<"o";
        }
        cout<<"r";
        for (int i = 0; i < n; i++)
        {
            cout<<"e";
        }
        for (int i = 0; i < n; i++)
        {
            cout<<"!";
    }
    } else
    {
        cout<<endl<< "Inputan Invalid";
    }
    
    
    
    return 0;
}