#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int a;
    cout<<"input satu angka bulat: ";
    cin>>a;
    if (a % 2 == 0) {
        cout<<"angka mu genap";
    } else
    {
        cout<<"angka mu ganjil";
    }
    
    
    return 0;
}