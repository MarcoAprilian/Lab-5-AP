#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float a,ta,tl,v,l;
    system("CLS");

    cout<<"Input sisi alas 1 : ";
    cin>>a;
    cout<<"Input sisi alas 2: ";
    cin>>ta;
    cout<<"Input tinggi limas : ";
    cin>>tl; 
    l=a*ta/2;
    v=l*tl/3;

    cout<<"volume= "<<v<<endl;
    cout<<"Luas Permukaan= "<<l;
}