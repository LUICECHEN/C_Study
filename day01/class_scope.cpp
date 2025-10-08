#include <iostream>
;

class MyClass{
  public:
    static int class_var;
};

int MyClass::class_var = 30;

int main(void)
{
  std::cout << "类变量："<< MyClass::class_var << std::endl;

  return 0;
}