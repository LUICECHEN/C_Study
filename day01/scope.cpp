#include <iostream>
using namespace std;
//全局变量
int a = 10;
int g = 20;

int main(void){

  int b = 5; //局部变量

  int g = 10; //内部的变量定义会覆盖外部的变量定义
  cout << "a = " << a <<endl;
  cout << "b = " << b <<endl;
  cout << "g = " << g <<endl;


}