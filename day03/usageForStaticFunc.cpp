#include <iostream>
using namespace std;

class Cpoint{
  public:
    static int value;
    static int num;
    Cpoint(int x, int y){
      xp = x;yp = y;
      value++;
      cout << "调用构造： " << value << endl;
    }

    ~Cpoint(){
      num++; cout << "调用析构： " << num << endl;
    }
  private:
    int xp, yp;
};

int Cpoint::value = 0;
int Cpoint::num = 0;

class Crect{
  public:
    Crect(int x1, int x2):mpt1(x1, x2),mpt2(x1,x2){
      cout << "调用构造： " << endl;
    }
    ~Crect(){
      cout << "调用析构： " << endl;
    }

    private:
     Cpoint mpt1, mpt2;
};

int main(){
  Crect p(10,20);
  cout << "Hello World!" << endl;

  return 0;

}