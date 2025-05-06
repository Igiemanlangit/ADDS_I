//upper and lower bound case example

#include <iostream>
#include <vector> // for using std::vector

int linearSearch(const std::vector<int>& a, int value) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1; 
}

int main() {
    std::vector<int> a = {5, 8, 2, 9, 1};
    int value = 9;

    int index = linearSearch(a, value);

    if (index != -1) {
        std::cout << "Value found at index: " << index << std::endl;
    } else {
        std::cout << "Value not found." << std::endl;
    }

    return 0;
}