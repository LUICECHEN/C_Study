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
  return 0;

}