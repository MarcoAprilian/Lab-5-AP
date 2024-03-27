#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char nilai;

    cout<<"berapa nilai kamu: ";
    cin>>nilai;

    if (nilai = 'A') {
        cout<<"Bagus, Pertahankan";
    } else if (nilai = 'B') {
        cout<<"tingkatkan";
    }  else if (nilai = 'C') {
        cout<<"Belajar lebih giat";
    } else if (nilai = 'D') {
        cout<<"Silahkan ulang";
    } else if (nilai = 'E') {
        cout<<"wajib ulang";
    } else {
        cout<<"Invalid, silahkan input dengan benar";
    }
    
    return 0;
}