#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int umur;

     cout<<"Berapa umur kamu: ";
     cin>> umur;

    // if (umur < 0) {
    //     cout<<"Kamu bukan manusia";
    // } else
    //     {
    //     if (umur > 0 && umur < 5)
    //     {
    //         cout<<"kamu balita";
    //     }
        
    //     else
    //         {
    //             if (umur > 5 && umur < 10)
    //             {
    //                 cout<<"kamu anak anak ";
    //             }
                
    //             else
    //             {
    //                 if (umur > 10 && umur < 18)
    //                 {
    //                     cout<<"kamu remaja";
    //                 }
                    
    //                 else
    //                 {   
    //                     if (umur > 18 && umur < 50)
    //                     {
    //                         cout<<"kamu dewasa";
    //                     }
                        
    //                     else
    //                     {
    //                         if (umur > 50 && umur < 70)
    //                         {
    //                             cout<<"kamu lansia";
    //                         }
                            
    //                         else
    //                         {
    //                             cout<<"tua kali wak";
    //                         }
    //                     }
    //                 }
    //             }
    //         }    
    //     }        
    
    switch (umur)
    {
    case 0 ... 5:
        cout<<"balita";
        break;
    case 6 ... 10:
        cout<<"anak-anak";
        break;
    case 11 ... 18:
        cout<<"remaja";
        break;
    case 19 ... 50:
        cout<<"dewasa";
        break;
    case 51 ... 70:
        cout<<"lansia";
        break;
    default:
        cout<<"invalid";
        break;
    }
    
    return 0;
}