#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int ulang,baris;
    ulang=1;

    while (ulang != 0)
    {
        cout<<"Masukkan jumlah baris yang ingin di tes(ganjil): ";
        cin>>baris;

        if (baris % 2 ==0)
        {
            cout<<"Input Invalid, silahkan input ulang angka"<<endl;
        } else
        {
            ulang = 0;
        }
        
    }

    for (int i = 0; i <= baris; i++)
    {
        if (i <= baris/2)
        {
            for (int j = baris/2; j > i; j--)
            {
                cout<<" ";
            }
            for (int k = 0; k <= i; k++)
            {
                cout<<"* ";
            }
        } else
        {
            for (int l = baris/2; l < i; l++)
            {
                cout<<" ";
            }
            for (int m = baris; m > i; m--)
            {
                cout<<"* ";
            }
        }
        cout<<endl;   
    }
    
    
    
    return 0;
}