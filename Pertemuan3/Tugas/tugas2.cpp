#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    system("CLS");
    int gol,anak;
    double bonus,total,gaji;
    string nama;

    cout<<"Input nama: ";
    getline(cin,nama);
    cout<<endl<<"masukkan golongan anda(1,2,3): ";
    cin>>gol;
    switch (gol)
    {
    case 1:
        gaji = 5000000;
        break;
    case 2:
        gaji = 3000000;
        break;
    case 3:
        gaji = 2500000;
        break;
    default:
        cout<<"pilihan mu tidak valid";
        break;
    }
    
    cout<<endl<<"masukkan jumlah anak: ";
    cin>>anak;
    if (anak < 3) {
        bonus =500000;
    } else {
        bonus =750000;
    }

    total = (gaji+(bonus * anak))*0.95;
    cout << fixed;
    cout << setprecision(2)<<total;
    
    return 0;
}