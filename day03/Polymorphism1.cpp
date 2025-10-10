#include <iostream>
using namespace std;

class Animal{
  public:
  //虚函数 sound，为不同的动物发声提供接口
  virtual void sound()const{
    cout << "Animal makes a sound" << endl;
  }
  //虚析构函数确保子类对象被正确析构
  virtual ~Animal(){
    cout <<"Animal destroyed" <<endl;
  }
};

class Dog : public Animal{
  public:
    void sound() const override{
      cout << "Dog barks" << endl;
    }
    ~Dog(){
      cout << "Dog destroyed" << endl;
    }

};

class Cat : public Animal{
  public:
    void sound() const override{
      cout << "Cat meows" << endl;
    }
    ~Cat(){
      cout << "Cat destroyed" << endl;
    }
};

int main(void){
  Animal * animalPtr;
  animalPtr = new Dog();
  animalPtr->sound();
  delete animalPtr;

  animalPtr = new Cat();
  animalPtr -> sound();
  delete animalPtr;

  return 0;

}
