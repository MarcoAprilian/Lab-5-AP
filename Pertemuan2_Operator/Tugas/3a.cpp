#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float r,t,s,pi=3.14,v,l;
    system("CLS");

    cout<<"Input jari-jari : ";
    cin>>r;
    cout<<"Input tinggi : ";
    cin>>t;
    cout<<"Input sisi : ";
    cin>>s; 
    v=((pi*pow(r,2))*t)/3;
    l=(pi*r)*(s+r);

    cout<<"volume= "<<v<<endl;
    cout<<"Luas Permukaan= "<<l;
}