#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    system("CLS");
    vector<int> deret;
    string deretangka;
    int angka;

    cout<<"Masukkan deret angka yang dipisah spasi: ";
    getline(cin,deretangka);

    stringstream stream(deretangka);
    while (stream>>angka)
    {
        deret.push_back(angka);
    }
    
    cout<<"Deret angka: ";
    for (int i :deret)
    {
        cout<<i<<" ";
    }

    cout<<endl<<"Panjang vektor: "<<deret.size();

    for (int i=1; i<=deret.size();)
    {
        cout<<endl<<deret.front()<< " ";
        deret.erase(deret.begin());
    }

    cout<<endl<<"Panjang vektor: "<<deret.size();
    
    return 0;
}