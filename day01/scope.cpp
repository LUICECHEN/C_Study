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
/* #include <iostream>
using namespace std;

// 全局变量声明
int g = 99;

// 函数声明
int func();

int main()
{
    // 局部变量声明
    int g = 10;
    cout << g << endl;
    int kk = func();
    cout << kk;
    return 0;
}

// 函数定义
int func()
{
    return g;
} */
