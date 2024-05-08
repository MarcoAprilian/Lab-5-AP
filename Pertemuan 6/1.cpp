#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int tinggi,kiri,kanan;
    int array[30][30];
    string yn;

    tinggi = 30;
    
    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ( ( array[i][j] == array[i][1])|| (array[i][j] == array[j][j]) )
                {
                    array[i][j] = 1;
                }
            else
                {                   
                    array[i][j] = array[i-1][j-1] + array[i-1][j];                    
                }
        }
    }
    
    ulang:
    
    system("CLS");

    cout<<"Masukan bilangan x yang diinginkan (1-30): ";
    cin>>kiri;

    if (kiri>30)
    {
        cout<<"inputan tidak valid";
        goto ulang;
    }
    
    cout<<endl<<"Masukan bilangan y yang diinginkan (1-30): ";
    cin>>kanan;
    cout<<endl<<array[kiri][kanan];

    if (kanan>30)
    {
        cout<<"inputan tidak valid";
        goto ulang;
    }
    
    cout<<endl<<"Apakah masih ingin menggunakan program?(Y/N)";
    cin>>yn;

    if ((yn=="Y") || (yn=="y"))
    {
        goto ulang;
    }
    

    return 0;
}