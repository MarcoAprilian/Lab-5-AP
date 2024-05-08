#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("CLS");
    int array[3][3];
    int a=0,b=0,c=0;
    float efisiensi;

    ulang: 
    
    for (int i = 1; i < 4; i++)
    {
        cout<<"Masukkan Hasil coder["<<i<<"]: ";
        cin>>array[1][i];
        cout<<endl;

        if (a<array[1][i])
        {
            a = array[1][i];
        }
    }

    for (int i = 1; i < 4; i++)
    {
        cout<<"Masukkan Hasil algorithmist["<<i<<"]: ";
        cin>>array[2][i];
        cout<<endl;

        if ((array[2][i]>b)&&(array[2][i]!=a))
        {
            b = array[2][i];
        }
    }

    for (int i = 1; i < 4; i++)
    {
        cout<<"Masukkan Hasil tester["<<i<<"]: ";
        cin>>array[0][i];
        cout<<endl;

        if ((array[0][i]>c)&&(array[0][i]!=a)&&(array[0][i]!=b))
        {
            c = array[0][i];
        }
    }
    
    cout<<endl<<"coder: "<<a;
    cout<<endl<<"algorithmist: "<<b;
    cout<<endl<<"tester: "<<c;

    efisiensi=sqrt( (pow(a,2)) + (pow(b,2)) + (pow(c,2)));
    cout<<endl<<"efisiensi: "<<efisiensi;
    
    if ((yn=="Y") || (yn=="y"))
    {
        goto ulang;
    }

    return 0;
}