#include "foo_sort.h"
#include <iostream>


int main() {
    std::vector<int> v{ 10, 42, 5 };
    FooSort(v);
    std::cout << "Sorted vector: ";
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}