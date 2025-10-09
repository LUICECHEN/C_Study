#include <iostream>
using namespace std;

class Box
{
  double width;
public:
  friend void printWidth(Box box);
  friend class BigBox;
  void setWidth(double wid);
};

class BigBox
{
public:
  void Print(int width, Box &box)
  {
    // BigBox是Box的友元素，它可以直接访问Box类的所有成员
    box.setWidth(width);
    cout << "Width of box : " << box.width << endl;

  }
};

void Box::setWidth(double wid)
{
  width = wid;
}

//友元函数不是任何类的成员函数
void printWidth(Box box)
{
  //因为printWidth()是Box的友元，它可以直接访问该类的任何成员变量
  cout << "Width of box : " << box.width << endl;
}

int main(void){
  Box box;
  BigBox big;

  box.setWidth(10.0);
  printWidth(box);

  big.Print(20.0, box);

  return 0;


}