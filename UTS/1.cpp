#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string kalimat;

    cout<<"input suat kalimat: ";
    getline(cin,kalimat);

    for(char i : kalimat)
    {
        cout<<i<<endl;
    }
    
    return 0;
}