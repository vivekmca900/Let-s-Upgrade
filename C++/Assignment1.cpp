#include <iostream>
using namespace std;
int main() {
  int num1, num2, num3;
  cin>> num1 >> num2 >> num3;
   
  //assignment Operators

  num1 += 1;
  cout << num1 << endl;

  num1 -= 1;
  cout << num1 << endl;

  num1 *= 4;
  cout << num1 << endl;

  num1 /= 2;
  cout << num1 << endl;

  //comparision operators

  if (num1 == num2){
    cout << "Both are equals" << endl;
  }

  else if (num1 > num2){
    cout << "Num1 is greater" << endl;
  }

  else if (num1 < num2){
    cout << "Num1 is smaller" << endl;
  }

  else if (num1 != num2){
    cout << "Unequal" << endl;
  }

  else if (num1 >= num2){
    cout << "num1 is greater and equal to num2" << endl;
  }

  //3 logical operators

  if (num2>1 && num2<10){
    cout << "num1 is the number between 1 to 10 not including 1 and 10" << endl;
  }

  else if (num1 < 0 || num2 > 0){
    cout << "Num1 is less than zero and num2 is greater than zero" << endl;
  }

  return 0;
}
