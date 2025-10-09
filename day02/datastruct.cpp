#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef int Item;

typedef struct node{
  Item item;
  struct node * next;
}Node, *LinkList;

void InitLinkList(LinkList &L){
  L = NULL;
}

bool AddNode(LinkList *L, Item item){
  Node * scan;
  Node * newNode;
  newNode = (Node *)malloc(sizeof(Node));
  if(newNode == NULL){
    return false;
  }
  newNode->item = item;
  newNode->next = NULL;
  if(*L == NULL){
    *L = newNode;
  }
  else{
    scan = *L;
    while(scan->next != NULL){
      scan = scan->next;
    }
    scan->next = newNode;
  }
  return true;
}

int main(void){

  //数组
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  for(int i = 0; i < 10; i++){
    cout << array[i] << endl;
  }

  //向量
  vector<int> myVector = {1,2,3,4,5,6,7,8,9,10};
  myVector.push_back(11);
  for(int i = 0; i < myVector.size(); i++){
    cout << myVector.at(i) << endl;
  }

  //链表
  LinkList L;
  InitLinkList(L);
  AddNode(&L, 1);
  AddNode(&L, 2);
  AddNode(&L, 3);
  Node * scan = L;
  while(scan != NULL){
    cout << scan->item << endl;
    scan = scan->next;
  }

  //栈
  stack<int> myStack;
  myStack.push(1);
  myStack.push(2);
  cout << myStack.top() << endl;
  myStack.pop();

  //队列
  queue<int> myQueue;
  myQueue.push(1);
  myQueue.push(2);
  cout << myQueue.front() << endl;
  myQueue.pop();

  //哈希表
  unordered_map<string, int> hashTable;
  hashTable["a"] = 1;
  hashTable["b"] = 2;
  hashTable["c"] = 3;
  cout << hashTable["a"] << endl;
  cout << hashTable["b"] << endl;
  cout << hashTable["c"] << endl;

    //map
    map<string, int> mapTable;
    mapTable["a"] = 1;
    mapTable["b"] = 2;
    mapTable["c"] = 3;
    cout << mapTable["a"] << endl;
    cout << mapTable["b"] << endl;
    cout << mapTable["c"] << endl;
  
    set<int> mySet;
    mySet.insert(1);
    mySet.insert(2);
    cout << *mySet.begin() << endl;


    return 0;

}