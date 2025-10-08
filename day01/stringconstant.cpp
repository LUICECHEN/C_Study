#include <iostream>

using namespace std;

int main(void){
  string greeting = "Hello World";
  cout << greeting << endl;

  //可以使用\对较长的字符串进行换行
  string greeting2 = "Hello\
  World";
  cout << greeting2 << endl;

  return 0;
}