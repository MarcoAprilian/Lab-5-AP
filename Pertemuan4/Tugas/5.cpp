#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int n;
    string hasil;

    cout<<"input angka yang mau dites: ";
    cin>>n;

    if (n <= 1)
    {
        hasil= "bukan prima";
    } 
        
    for (int i = 2; i <= n/2; i++)
    {   
        if (n % i == 0 )
        {
            hasil="bukan prima";
            break;
        }else
        {
            hasil="prima";
        }
            
    } 
        
    cout<<hasil;
    
    return 0;
}