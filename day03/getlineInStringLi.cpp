#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(void){
  fstream iofile;
  iofile.open("afile.dat",ios::in | ios::out|ios::trunc);
  string bookname;
  string bookwriter;
  cout << "请输入书名：" << endl;
  getline(cin,bookname);
  cout << "请输入作者：" << endl;
  getline(cin,bookwriter);
  iofile << bookname << endl;
  iofile << bookwriter << endl;
  iofile.close();

  cout << "read the input file : " <<endl;
  iofile.open("afile.dat",ios::in);
  while (getline(iofile,bookname)){
    cout << bookname << endl;
  }

  return 0;

}