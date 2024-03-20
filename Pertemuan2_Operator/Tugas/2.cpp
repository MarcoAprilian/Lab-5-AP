#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float A,B,C;
    float x1,x2,x3;
    int pangkat=2;
    system("CLS");

    cout<<"Ax^2+Bx+c=0"<<endl;
    cout<<"Input nilai A : ";
    cin>>A;
    cout<<"Input nilai B : ";
    cin>>B;
    cout<<"Input nilai C : ";
    cin>>C;

    x1 = (-B + sqrt((pow(B,2)- 4*A*C)))/(2*A);
    x2 = (-B - sqrt((pow(B,2)- 4*A*C)))/(2*A);

    cout<<"x1= "<<x1<<endl;
    cout<<"x2= "<<x2;
}