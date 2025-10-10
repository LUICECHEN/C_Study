#include <iostream>
using namespace std;

class Shape{
  protected:
    int width, height;
    public:
    //构造函数，带有默认参数
      Shape(int w=0, int h=0):width(w), height(h){}
      //虚函数area，用于计算面积
      //使用virtual关键字， 实现多态
      virtual int area(){
        cout <<"Shape area" << endl;
        return 0;
      }
};

class Rectangle: public Shape
{
  public:
    //构造函数， 使用基类构造函数初始化 width 和height
    Rectangle(int w=0, int h=0): Shape(w,h){}
    //重写area函数，计算矩形面积
    int area() override{
      cout << "Rectangle class area: " << endl;
      return width * height;
    }
};

class Triangle: public Shape{
  public: 
    Triangle(int w=0, int h = 0):Shape(w,h){}

    int area() override{
      cout << "Triangle class area: " << endl;
      return (width * height / 2);
    }
};

int main(void){
  Shape * shape;
  Rectangle rec(10, 7);
  Triangle tri(10, 5);

  shape = &rec;
  cout << "Rectangle area: " << shape->area() << endl;
  shape = &tri;
  cout << "Triangle area: " << shape->area() << endl;

  return 0;
}
