#include <iostream>
using namespace std;

int main(void){
  int i ;
  double d;

  //引用的初始化
  int &ri = i;
  double& rd = d;

  i = 10;
  cout << "Value of i: " << i <<endl;
  cout << "Value of  i reference " << ri << endl;

  d = 3.14;
  cout << "Value of d: " << d <<endl;
  cout << "Value of  d reference " << rd << endl;

  return 0;

}