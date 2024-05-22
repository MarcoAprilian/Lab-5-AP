#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int bil[20];
    int *point;

    for (int i = 1; i <= 20; i++)
    {
        bil[i] =  i;
    }
    
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            cout<<bil[i]<<endl;
            point = &bil[i];
            cout<<"Alamat dari bilangan diatas adalah: "<<point<<endl;
        } 
    }
    
    
    return 0;
}