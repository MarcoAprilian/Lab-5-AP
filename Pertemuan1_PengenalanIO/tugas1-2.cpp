#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    string b;

    cout<<"Nama Depan: ";
    cin>>a;// hanya membaca kata pertama sebelum spasi
    cout<<a<<endl;

    cin.ignore();

    cout<<"Nama Lengkap: ";
    getline(cin,b); // bisa membaca spasi
    cout<<b<<endl;

}
