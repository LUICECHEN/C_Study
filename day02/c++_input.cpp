#include <iostream>
using namespace std;

int main(void){
  //1.cin输入
  int a, b;

  cin >>a>>b;
  cout << "a+b = " << a+b<<endl;
  getchar();  //清空缓冲区,可以用cin.get()来清空缓冲区
  //2.cin.get(字符变量名)
  char ch;
  ch = cin.get(); //cin.get(ch)等价
  cin.get();  //清空缓冲区
  cout << "ch = " << ch << endl;
  //3.cin.get(字符数组名，接受字符数)来获取字符串
  char str[20];
  cin.get(str, 6);  //有点类似getline，可以输入多个单词，中间用空格隔开
  cout << "str = " << str << endl;
  cin.get();  //清空缓冲区
  //4.cin.getline(接受字符串,接受个数,结束字符),结束字符默认是'\n'
  char str2[20];
  cin.getline(str2, 5);
  cout << "str2 = " << str2 << endl;



  return 0;
}
