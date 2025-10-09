#include <iostream>
using namespace std;

//引用作为参数，可以修改调用该函数块内的值
void swap(int &x, int &y);

//引用作为参数返回，这可以修改函数的返回值来修改变量（但是要注意变量的作用域，不能是局部变量）
double vals[5] = {10.1,20.1,30.1,40.1,50.1};  //定义了一个静态存储期的数组

double & setValue(int i){
  double & ref = vals[i];
  return ref;
}

int main(void){
  int a = 100;
  int b = 200;

  cout << "交换前，a的值: " << a << endl;
  cout << "交换前，b的值: " << b << endl;

  /*调用函数交换值*/
  swap(a,b);

  cout << "交换后，a的值: " << a << endl;
  cout << "交换后，b的值: " << b << endl;

  for (int i = 0; i < 5; i++){
    cout <<"修改前的数组"<< "vals[" << i << "] = " << vals[i] << endl;
  }

  /*下面的两条语句可简化为: setValue(1) = 22.2*/
  double & d_ref1 = setValue(1);
  d_ref1 = 22.2;

  /*下面的语句可简化为: setValue(4) = 55.5*/
  double & d_ref2 = setValue(4);
  d_ref2 = 55.5;

   for (int i = 0; i < 5; i++){
    cout <<"修改后的数组"<< "vals[" << i << "] = " << vals[i] << endl;
  }

  return 0;
}

void swap(int & x, int & y){
int temp;
temp = x;
x = y;
y = temp;
}