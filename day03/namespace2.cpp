#include <iostream>
using namespace std;

namespace A
{
  int a = 100;
  namespace B{
    int a = 200;
  }
}
int a = 200;//定义一个全局变量

int main(void){
  cout << "A::a = " << A::a << endl;
  cout << "A::B::a = " << A::B::a << endl;
  cout << "a = " << a << endl;
  cout << "::a = " << ::a << endl;

  int a = 30;
  cout <<"a = " << a << endl;
  cout <<"::a = " << ::a << endl;

  return 0;
}
