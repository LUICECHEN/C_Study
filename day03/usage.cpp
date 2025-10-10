#include <iostream>
 
using namespace std;
 
// 基类
class Shape 
{
   public:
      Shape(int w,int h)
      {
        width=w;
        height=h;
      }
   protected:
      int width;
      int height;
};
 
// 派生类
class Rectangle: public Shape
{
   public:
      Rectangle(int a,int b):Shape(a,b)
      {
        
      }
};