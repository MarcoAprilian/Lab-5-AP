#include<iostream>
using namespace std;

int main() {
    int I=2,K=7,L=1,C=9,U=5,S=6;
    int a1,a2,a3,a4;
    system("CLS");

    //3-1 < I or K-5 < 8+2 AND L+7 >= 9+3
    a1 = (3-1)<I||(K-5)<(8+2)&&(L+7)>=(9+3);
    cout<< "1a. "<<a1<<endl;
    cout<<endl;

    //L%3 > U AND (C/U < S OR 3*I-K > 0)
    a2 = (L+3)>U&&((C/U)<S||(3*1-K)>0);
    cout<<"2a. "<<a2<<endl;
    cout<<endl;

    //I-9 > K OR L+3 < 4*C
    a3 = (I-9)>K||(L+3)<(4*C);
    cout<<"3a. "<< a3<<endl;
    cout<<endl;

    //I OR K AND L XOR 3 SHL 2
    a4 = I|K&L^3<<2;
    cout<<"4a. "<<a4<<endl;
    cout<<endl;
}