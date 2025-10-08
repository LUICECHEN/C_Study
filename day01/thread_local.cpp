#include <iostream>
#include <thread>

thread_local int threadSpecificVar = 0;

void threadFunction(int id){
  threadSpecificVar = id;
  std::cout << "Thread " << id << ": threadSpecificVar = " << threadSpecificVar << std::endl;
}

int main(void){
  std::thread t1(threadFunction, 1);
  std::thread t2(threadFunction, 2);

  t1.join();
  t2.join();

  return 0;
}