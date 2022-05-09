#include <iostream>

#include "assignment/insertion_sort.hpp"

#include "assignment/heap_sort.hpp"

#include "assignment/partitioning.hpp"
#include "assignment/quick_sort.hpp"

#include "assignment/merging.hpp"
#include "assignment/merge_sort.hpp"

using namespace std;
using namespace assignment;

int main() {

  std::vector<int> arr = {-39, -79, 45, 23, 12, 25};

  InsertionSort sort;
  sort.Sort(arr);
  cout << "" << endl;
  return 0;
}
