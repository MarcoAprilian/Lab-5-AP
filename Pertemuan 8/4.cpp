#include <iostream>
using namespace std;

void tambah(float *bil1,float *bil2) {
     cout <<"Hasil: "<<*bil1+*bil2<< endl;
}
void kurang(float *bil1,float *bil2) {
     cout <<"Hasil: "<<*bil1-*bil2<< endl;
}
void kali(float *bil1,float *bil2) {
     cout <<"Hasil: "<<*bil1 * *bil2<< endl;
}
void bagi(float *bil1,float *bil2) {
     cout <<"Hasil: "<<*bil1 / *bil2<< endl;
}


int main() {
    float bil1, bil2;
    char op;
    string yn;

    ulang:
    system("CLS");

    cout<<"Masukkan bilangan pertama: ";
    cin>>bil1;
    cout<<endl<<"Masukkan bilangan kedua: ";
    cin>>bil2;
    cout<<endl<<"masukkan operator yang ingin digunakkan(+,-,*,/): ";
    cin>>op;

    switch (op)
    {
    case '+':
        tambah(&bil1,&bil2);
        break;
    case '-':
        kurang(&bil1,&bil2);
        break;
    case '*':
        kali(&bil1,&bil2);
        break;
    case '/':
        bagi(&bil1,&bil2);
        break;
    
    default:
        break;
    }

    cout<<endl<<"Apakah masih ingin menggunakan program?(Y/N)";
    cin>>yn;

    if ((yn=="Y") || (yn=="y"))
    {
        goto ulang;
    }
    
    return 0;
}