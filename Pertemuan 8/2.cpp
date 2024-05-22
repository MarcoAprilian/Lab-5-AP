#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int x;
    int *px;

    x=25;

    px=&x;
    cout<<px<<endl;

    *px=x;
    cout<<*px;
    
    return 0;
}