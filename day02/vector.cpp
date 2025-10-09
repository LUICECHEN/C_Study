#include <iostream>
#include <vector>

int main(void){
  std::vector<int> myVector;

  //添加元素
  myVector.push_back(10);
  myVector.push_back(20);
  myVector.push_back(3);
  myVector.push_back(60);

  //访问向量中的元素并打印
  std::cout << "向量中的元素：";
  for (int element : myVector){
    std::cout << element << " ";
  }
  std::cout << std::endl;
  //访问向量中指定索引的元素
  std::cout << "向量中的第2个元素: " << myVector[1] << std::endl;
  std::cout << "向量中的第3个元素: " << myVector.at(2) << std::endl;

  //获取向量中的元素个数
  std::cout << "向量中的元素个数: " << myVector.size() << std::endl;

  //删除向量中的第三个元素
  myVector.erase(myVector.begin() + 2);
  std::cout << "删除第三个元素后，向量中的元素：";
  for (int element : myVector){
    std::cout << element << " ";
  }
  std::cout << std::endl;

  //清空向量并输出
  myVector.clear();
  std::cout << "清空向量后，向量中的元素个数: " << myVector.size() << std::endl;

  return 0;

}