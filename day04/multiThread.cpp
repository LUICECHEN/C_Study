#include <iostream>
#include <thread>

//1.给线程传递函数指针
void printMessage(int count){
  for (int i = 0; i< count; i++){
    std::cout << "Hello from thread (function pointer)!\n";
  }
}

//2.给线程传递函数对象
class PrintTask{
  public:
  //这里重载了()运算符，函数对象就是通过重载()运算符，使得对象可以函数那样调用
    void operator()(int count) const{
      for (int i = 0; i < count;i++){
        std::cout << "Hello from thread (function object)!\n";
      }
    }
};

int main(void){
  std::thread t1(printMessage, 5);//创建线程，传递函数指针，和给函数的参数
  std::thread t2(PrintTask(), 5);//传递函数对象,PPrintTask()是创建了一个PrintTask对象,这里是PrintTask()(5)
  std::thread t3([](int count){
    for (int i = 0; i < count; i++){
      std::cout << "Hello from thread (lambda)!\n";
    }
  },5);//创建线程，传递Lambda表达式和参数

  t1.join();  //等待线程完成
  t2.join();
  t3.join();
  return 0;
}