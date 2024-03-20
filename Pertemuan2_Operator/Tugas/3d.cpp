#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float p,t,le,s,v,l,al;
    system("CLS");

    cout<<"Input panjang : ";
    cin>>p;
    cout<<"Input tinggi : ";
    cin>>t;
    cout<<"Input lebar : ";
    cin>>le;
    cout<<"Input sisi : ";
    cin>>s;  
    al=p*le/2;
    v=al*t;
    l=(2*al)+(3*(s*t));

    cout<<"volume= "<<v<<endl;
    cout<<"Luas Permukaan= "<<l;
}