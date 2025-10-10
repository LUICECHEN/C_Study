#include <iostream>
using namespace std;

namespace first_space{
  void func(){
    cout << "Inside first_space" << endl;
  }
}

namespace second_space{
  void func(){
    cout << "Inside second_space" << endl;
  }
}
//这个指令告诉编译器，后续的代码将使用指令的命名空间的名称
using namespace first_space;
int main(void){
  func();
  return 0;

}