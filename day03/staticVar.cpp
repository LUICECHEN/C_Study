#include <iostream>
using namespace std;

class Box
{
  public:
    static int objectCount;
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
      cout << "Constructor called." << endl;
      length = l;
      breadth = b;
      height = h;
      // 每次创建对象时增加 1
      objectCount++;
    }
    double Volume(){
      return length * breadth * height;
    }
    private:
      double length;
      double breadth;
      double height;
};

int Box::objectCount = 0;

int main(void){
  Box Box1(3.3, 1.2, 1.5);
  Box Box2(8.5, 6.9, 2.0);

  cout << "total objects : " << Box::objectCount << endl;
  return 0;
}