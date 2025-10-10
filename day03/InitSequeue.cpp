/* #include <bits/stdc++.h>
using namespace std;

class Shape
{
  public:
    Shape(){
      cout << "Shape" << endl;
    }
    ~Shape(){
      cout <<"~Shape" << endl;
    }
};

class PaintCost{
  public:
    PaintCost(){
      cout << "PaintCost" << endl;
    }
    ~PaintCost(){
      cout << "~PaintCost" << endl;
    }

};

class Rectangle: public Shape, public PaintCost   //基类构造顺序,依照 继承顺序
{
  public:
    Rectangle():b(),a(),Shape(),PaintCost(){
      cout << "Rectangle" << endl;
    }
    ~Rectangle(){
      cout << "~Rectangle" << endl;
    }
    PaintCost b;  //类成员变量顺序 依照 变量定义顺序
    Shape a;
};

int main(void){

  Rectangle Rect;
  return 0;
}

 */

 #include <iostream>
using namespace std;

class Value{
    public:
        Value(int x){
            cout << "开始构造Value" << endl; 
            value = x;
        }
        int getValue()
        {
            return value;
        }
        ~Value()
        {
            cout << "开始析构Value" << endl; 
        }
    private:
        int value;
};

class Num{
    public:
        Num(int y)
        {
            cout << "开始构造Num" << endl; 
            num = y;
        }
        int getNum()
        {
            return num;
        }
        ~Num()
        {
            cout << "开始析构Num" << endl; 
        } 
    private:
        int num;
};

class Test : public Value,public Num{
    public:
        Test(int x,int y):Value(x),Num(y)
        {
            cout << "开始构造Test" << endl; 
        }
        void getAllInfo()
        {
            cout << "value:" << getValue() << endl;
            cout << "num:" << getNum() << endl;
        }
        ~Test()
        {
            cout << "开始析构Test" << endl; 
        } 
};

int main(){
    Test t(10,20);
    t.getAllInfo();
    return 0;
}