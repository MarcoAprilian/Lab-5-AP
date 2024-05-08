#include <iostream>
using namespace std;

int main() {
    ulang:
    system("CLS");
    string kalimat,yn;

    cout<<"Masukkan kalimat kurang dari 100 karakter: ";
    getline(cin,kalimat);

    if (kalimat.length()>100)
    {
        cout<<"inputan tidak valid";
        goto ulang;
    }

    for (int i = (kalimat.length()/2)-1; i >= 0; i--)
    {
         cout<<kalimat[i];
    }
    for (int i = kalimat.length(); i >= (kalimat.length()/2); i--)
    {
         cout<<kalimat[i];
    }
    
    cout<<endl<<"Apakah masih ingin menggunakan program?(Y/N)";
    cin>>yn;

    if ((yn=="Y") || (yn=="y"))
    {
        goto ulang;
    }
    
    return 0;
}