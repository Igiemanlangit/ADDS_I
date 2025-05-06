#include <iostream>
#include "Selection.h"

int main() {
    std::vector<int> numbers = {5, 4, 3, 2, 1};

    Selection sorter;
    sorter.selectionSort(numbers);

    std::cout << "Sorted: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}