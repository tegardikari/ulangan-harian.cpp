#include <iostream>
using namespace std;
int main (){
  int nilai;
  cout << "Nilai Kamu = ";
  cin >> nilai;
  if (nilai > 95){
    cout<< "S" <<endl;
  }else if (nilai > 90){
    cout << "A" <<endl;
  }else if (nilai > 80){
    cout << "B" <<endl;
  }else if (nilai > 70){
    cout << "C" <<endl;
  }else if (nilai < 70){
    cout << "D";
  }
   return 0;
}