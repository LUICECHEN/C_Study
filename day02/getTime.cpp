#include <iostream>
#include <ctime>

using namespace std;

int main(void){
  time_t now = time(0);

  //把now转换为字符串形式
  char * dt = ctime(&now);

  cout <<"本地日期和时间: "<< dt << endl;

  //把now转换为tm结构
  tm* gmtm = gmtime(&now);
  dt = asctime(gmtm);
  cout <<"UTC 日期和时间: " << dt << endl;

  return 0;
}