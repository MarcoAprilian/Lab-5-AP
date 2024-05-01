#include <iostream>
#include <cmath>
using namespace std;

int pangkat(int num1,int num2){
    return round(pow(num1,num2));
}

int main() {
    system("CLS");
    int a,b;
    
    cout<<"Masukkan angka: ";
    cin>>a;
    cout<<endl<<"Masukkan Pangkat: ";
    cin>>b;

    cout<<pangkat(a,b);

    return 0;
}