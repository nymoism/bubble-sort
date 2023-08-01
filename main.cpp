#include <cstdlib>
#include <iostream>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>




void ret_structured_array(std::vector<int> list) {
  std::cout << "ordered list: ";
  for (int element : list) {
    std::cout << element << " "; 
  }
  std::cout <<  std::endl;
}


std::vector<int> create_list(int size) {
  std::vector<int> aVec;
  aVec.resize(size);

  for (int i = 0; i < size; ++i) {
    int randNum = rand() % 100 - 1;
    aVec[i] = randNum;
  }
  std::cout << "original list: ";
  for (int element : aVec) {
    std::cout << element << " ";
  }
  std::cout << std::endl;

  return aVec;
}

void bubble_sort(std::vector<int> list) {
  for (long unsigned int i = 0; i < list.size(); ++i) {
    bool swapped = false;
      for (long unsigned int j = 0; j < list.size(); ++j){
        if (list[j] > list[j + 1] ){
          std::swap(list[j], list[j+ 1]);
          swapped = true;
        }
      }
      if (!swapped){
        break;
      }
    }
  ret_structured_array(list);
  }




  int main() {
    srand(time(0));
    int randNum = rand() % 100 - 1;


    std::vector<int> mList = create_list(10);
    bubble_sort(mList);
  

  

    // Testing Creating Random Number
    std::cout << "Random Number: " << randNum << std::endl;

    return 0;
  }
