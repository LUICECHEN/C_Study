#include <iostream>
using namespace std;

int main(void){
  double *pvalue = NULL;
  pvalue = new double;  //为变量请求内存
  *pvalue = 29493.99;
  cout <<"Value of pcalue : " << *pvalue << endl;

  delete pvalue;

  //动态分配二维数组
  int **array;
  //假定数组的第一维长度为m，第二维长度为n
  int m = 5;
  int n = 5;
  array = new int *[m];
  int i,j;
  for (i = 0; i < m; i++){
    array[i] = new int[n];
  }

   for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            array[i][j] = i*j;
        }
    }
       for(i=0; i<m; i++){
        for(j=0; j<n; j++){
           if(j==0) cout << endl;
           cout << array[i][j] << "\t";
        }
    }

  //释放
  for (i = 0; i< m;i++){
    delete [] array[i];
  }

  delete []array;


  return 0;

}