#include <iostream>
using namespace std;

typedef enum color{
  red,
  green,
  blue
};

int main(void){
  color c = red;
  cout << "The number of red is " << c << endl;

  return 0;
}