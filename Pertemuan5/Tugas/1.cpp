#include <iostream>
#include <typeinfo>
using namespace std;

int FizzBuzz(int deret)
{   
    int type;

    if ((deret % 3 == 0) && (deret % 5 == 0))
        {
            cout << "FizzBuzz";
        } else if (deret % 3 == 0)
            {
                cout << "Fizz";
            } else if (deret % 5 == 0)
                {
                    cout << "Buzz";
                } else
                    {
                        cout <<deret;
                        type =deret;
                    }
                
    return type;
}

int fderet(int n)
{
    int t=4,deret=2,type;
    for (int i = 1; i <= n; i++)
    {
       type=FizzBuzz(deret);
       if (i<n)
            {
                cout << ", ";
            }
        deret+= t;
        t+=2;
    }
    cout<<endl<<"Tipe data "<<type<<" adalah "<<typeid(type).name();
    return 0;
}






int main() {
    system("CLS");
    int n;
    string ulang;
    ulang="Y";
    

    while ((ulang=="Y")||(ulang=="y"))
    {
        n=0;
        while ((n < 3) || (n > 100))
        {
            cout<<"input berapa panjang deret: ";
            cin>>n;
            cout<<"Inputan invalid, berikan nilai dioantara 3-100"<<endl;
        }
        fderet(n);
        cout<<endl<<"Apakah Anda ingin mengulang program (Y/N) ? ";
        cin>>ulang;
    }

    return 0;
}