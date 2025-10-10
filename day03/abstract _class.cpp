#include <iostream>
using namespace std;

class Shape{
  public:
  virtual int area() = 0; //纯虚函数，强制子类实现此方法
  
};

class Rectangle : public Shape{
  private:
    int width;
    int height;
  public:
    Rectangle(int w=0, int h = 0):width(w),height(h){}

    int area() override{
      return width * height;
    }
  };

  int main(void){
    Shape * shape;
    Rectangle rec(10, 7);
    shape = &rec;
    cout << "Rectangle area: "<< shape->area() <<endl;
    delete shape;
    return 0;
  }