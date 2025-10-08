#include <iostream>
#include <cmath>
using namespace std;

int main(void){
  short s = 10;
  int i = -100;
  long l = 100000;
  float f = 234.340;
  double d = 200.374;

  cout << "cos(s) = " << cos(s) << endl;
  cout << "abs(i) = " << abs(i) << endl;
  cout << "floor(d) = " << floor(d) << endl;
  cout << "sqrt(f) = " << sqrt(f) << endl;
  cout << "pow(d,2) = " << pow(d, 2) << endl;

  return 0;
}