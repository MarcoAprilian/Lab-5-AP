#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float r,pi=3.14,v,l;
    system("CLS");

    cout<<"Input jari-jari : ";
    cin>>r; 
    v=4*pi*pow(r,3)/3;
    l=4*pi*pow(r,2);

    cout<<"volume= "<<v<<endl;
    cout<<"Luas Permukaan= "<<l;
}