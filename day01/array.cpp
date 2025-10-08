#include <iostream>
#include <vector>
using namespace std;

#include <iomanip>
using std::setw;

int main(void){
  int n[10];

  for (int i = 0; i < 10; i++){
    n[i] = i + 100;
  }
  cout <<"Element" << setw(13) << "Value" << endl;

  for (int j = 0;j < 10; j++){
    cout << setw(7)<<j<<setw(13) << n[j] << endl;
  }

  cout<<"==============*******==============\n"<<endl;
  //创建向量用于存储整形数据
  vector<int>  vec;
  int i; 

  //显示vec初始大小
  cout << "vector size = " << vec.size() <<endl;

  //向向量 vec 追加5个整数值
  for (i = 0; i < 5; i++){
    vec.push_back(i);
  }

  cout << "extend vector size = " << vec.size() <<endl;

  return 0;
}