#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int bilangan,i;
    string a;
    bilangan = 0;

    while (bilangan <= 0)
    {
        cout<<"Masukkan bilangan bulat yang mau di tes: ";
        cin>>bilangan;

        if (bilangan <= 0)
        {
            cout<<"Input Invalid, silahkan input ulang angka"<<endl;
        }
    }

    for (i = 2; i <= bilangan/2; i++)
    {
        if (bilangan % i == 0)
        {
            a = " bukan bilangan prima";
            break;
        }
        else
        {
            a = " bilangan prima";
        }
           
    }
    if (bilangan <= 3)
    {
        a = " bilangan prima";
    }
    cout<<bilangan<<a;
    
    
    return 0;
}