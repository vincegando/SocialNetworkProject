//ListTest.cpp

#include "List.h"

int main() {
  List<int> list;

  List<int>::iterator itr;
  for(int i = 1; i < 1000; i++) {
      list.push_back(i);

  }

  Node<int>* curr = list.returnHead();
  for(int i = 1 ; i < 1000; i++){
      cout << curr -> getData() << endl;
      curr = curr -> getNext();
  }

  cout << list.size() << endl;

return 0;
}
