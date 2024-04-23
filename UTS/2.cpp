#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int angka;
    string ulang;
    char a;
    ulang = "y";

    while (ulang == "y" || ulang == "Y")
    {
        cout<<"Masukkan suat angka bulat: ";
        cin>>angka;

        if (angka%2==0)
        {
            cout<<"Angka "<<angka<<" adalah bilangan genap"<<endl;
        } else
        {
            cout<<"Angka "<<angka<<" bukan bilangan genap"<<endl;
        }

        if (angka%3==0)
        {
            cout<<"Angka "<<angka<<" habis dibagi tiga"<<endl;
        } else
        {
            cout<<"Angka "<<angka<<" tidak habis dibagi tiga"<<endl;
        }

        if (angka%5==0)
        {
            cout<<"Angka "<<angka<<" habis dibagi lima"<<endl;
        } else
        {
            cout<<"Angka "<<angka<<" tidak habis dibagi lima"<<endl;
        }

        if (angka%7==0)
        {
            cout<<"Angka "<<angka<<" habis dibagi tujuh"<<endl;
        } else
        {
            cout<<"Angka "<<angka<<" tidak habis dibagi tujuh"<<endl;
        }
        
        cout<<"apakah masih ingin menggunakan program(Y/N): ";
        cin>>ulang;        
    }
    
    
    return 0;
}