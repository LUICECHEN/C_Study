#include <iostream>
using namespace std;

class test{
  public:
    void hello(){
      cout << "hello" << endl;
    };
    void lambda(){
      auto fun = [this]{
        this->hello();
      };
      fun();
    }

};

int main(void){
  int i  = 10;

  //变量捕获
  auto func = [=]{
    cout << i<< endl;
  };
  func();
  //引用捕获
  cout << &i << endl;
  auto func2 = [&]{
    cout << &i << endl;
  };
  func2();
  //赋值并引用捕获
  int j = 20;
  cout << &i << endl;
  cout << &j <<endl;

  auto func3 = [=,&i]{
    cout << &i << endl;
    cout << &j << endl;
  };
  func3();

  //捕获this指针
  test t;
  t.lambda();
  return 0;
}