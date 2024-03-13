#include <iostream>
using namespace std;

int main(){
    float jarak,hasil;
    cout<<"masukkan jarak yang ingin dikonversi(m): ";
    cin>>jarak;
    cout<<endl;
    system("CLS");
    hasil = jarak/1000;
    cout<<"hasilnya adalah: "<<hasil<<"km";
}