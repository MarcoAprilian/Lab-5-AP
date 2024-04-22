#include <iostream>
using namespace std;

int main() {
  system("CLS");
  string kalimat;
  char k;

  cout<<"Masukkan kalimat yang diinginkan: ";
  getline(cin, kalimat);
  cout<<"Pilih huruf yang ingin dihilangkan: ";
  cin>>k;

  for (char i : kalimat)
  {
    if (i == tolower(k) || i == toupper(k))
      {
        continue;
      }
    cout<<i;
  }
  
  
  return 0;
}