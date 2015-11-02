//ListTest.cpp

#include "List.h"

int main() {

  List<int> list;

  for(int i = 0 ; i < 100; i++)
    list.push_back(i);

  List<int>::const_iterator itr = list.begin();
  for(++itr; itr != list.end(); itr++) {
      cout << *itr << endl;

  }

  // Node<int>* curr = list.returnHead();
  // for(int i = 1 ; i < 1000; i++){
  //     cout << curr -> getData() << endl;
  //     curr = curr -> getNext();
  // }

  //cout << list.size() << endl;

return 0;
}
