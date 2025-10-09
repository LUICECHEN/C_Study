#include <iostream>
#include <cstring>
using namespace std;

int main(void){
  char str1[20] = "hello";
  char str2[20] = "google";
  char str3[20];

  int len;

  //把str1复制到str3(其实strcpy就相当于是字符串间的赋值)
  strcpy(str3, str1);
  cout << "strcpy(str3, str1) : " << str3 << endl;

  //把str2追加到str1中
  strcat(str1, str2);
  cout << "strcat(str1, str2) : " << str1 << endl;

  //求字符串的长度
  len = strlen(str1);
  cout << "strlen(str1) : " << len << endl;

  return 0; 

}