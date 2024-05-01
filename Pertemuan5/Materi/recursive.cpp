#include <iostream>
using namespace std;

int factorial(int input){
    if (input > 1) {
        return input * factorial(input-1);
    } else {
        return 1;
    }
}

int main() {
    system("CLS");
    
    cout<<"Hasil dari 5! = "<<factorial(5);
    
    return 0;
}