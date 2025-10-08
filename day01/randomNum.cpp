#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void){
  srand((unsigned int)time(NULL));

  int i, j;
  for (i = 0; i < 10; i++){
    j = rand();
    cout << "j : " << j << endl;
  }

  //生成某个范围(左右都是闭区间)类比植树问题，两边都取就要+1的随机数 rand() % (max - min + 1) + min
  int min, max;
  cout << "请输入最小值" << endl;
  cin >> min;
  cout << "请输入最大值" << endl;
  cin >> max;
  for (i = 0; i < 20; i++){
    j = rand() % (max - min + 1) + min;
    cout << min << "~" << max <<"的随机数：" << j << endl;
  }

  return 0;

}

