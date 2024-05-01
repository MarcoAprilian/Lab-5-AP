#include <iostream>
using namespace std;

void garis (int karakter){
    for (int i = 0; i < karakter; i++)
    {
        cout<<"-";
    }
    
}


int main() {
    system("CLS");
    
    cout<<"Program Fungsi Tanpa Nilai Kembalian"<<endl;
    garis(7);
    
    return 0;
}