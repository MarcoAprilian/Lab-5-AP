#include <iostream>
using namespace std;

int main(){
    system("CLS");
    float hasil,tbm,bb,tb;
    cout<<"masukkan berat badanmu: ";
    cin>>bb;
    cout<<endl;

    cout<<"masukkan tinggi badanmu: ";
    cin>>tb;
    cout<<endl;

    tbm = tb/100;
    hasil = bb/(tbm*tbm);
    cout<<"Bmi anda: "<<hasil<<endl;
    if (hasil < 18.5)
    {
        cout<<"kamu underweight";
    }   else if (hasil <25.0)
    {
        cout<<"kamu normal";
    }   else if (hasil <30.0)
    {
        cout<<"kamu overweight";
    }   else if (hasil >= 30.0)
    {
        cout<<"kamu obesitas";
    } 
    
    return 0;
}