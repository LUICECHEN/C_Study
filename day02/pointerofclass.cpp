#include <bits/stdc++.h>
using namespace std;

class MyClass
{
  public:
    int data;

    void display(){
      cout << "Data : " << data << endl;
    }
};

int main(){
  MyClass * ptr = new MyClass;
  ptr->data = 43;

  ptr -> display();

  delete ptr;

  return 0;

}