#include <iostream>
using namespace std;

int sumNumber(int num1,int num2) {
    return num1 + num2;
}
int main() {
    system("CLS");
    
    int num1 = 10,num2 = 20; 
    cout<< "Hasil: "<<sumNumber(num1,num2);
    return 0;
}