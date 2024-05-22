#include <iostream>
using namespace std;

int main() {
    system("CLS");
    char *komputer="KOMPUTER";
    
    for (int i = 0; i <=  7; i++)
    {
        cout<<komputer[i]<<" ";
    }
    
    
    cout<<endl<<"huruf kelima dari kata diatas adalah: ";
    cout<<komputer[4];
    
    return 0;
}