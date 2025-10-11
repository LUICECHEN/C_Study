#include <iostream>
#include <csignal>
#include <unistd.h>
#include <windows.h>

using namespace std;

void signalHandle(int signum)
{
  cout << "Interrupt signal (" << signum << ") recieved.\n";

  //清理并关闭
  //终止程序
  exit(signum);
}

int main(void){
  int i = 0; 

  //注册信号SIGINT 和信号处理程序
  signal(SIGINT, signalHandle);

  while(++i){
    cout << "Going to sleep...." << endl;
    if(i == 3){
      //使用raise生成信号
      raise(SIGINT);
    }
    Sleep(1000);
  }

  return 0;
}
