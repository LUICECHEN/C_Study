#include <iostream>
#include <thread>

thread_local int threadData = 0;

void threadFunction(int num) {
    threadData = num; // 每个线程都有自己的threadData副本
    std::cout << "Thread data: " << threadData << std::endl;
}

int main() {
    std::thread t1(threadFunction,11);
    std::thread t2(threadFunction,22);
    t1.join();
    t2.join();
    return 0;
}