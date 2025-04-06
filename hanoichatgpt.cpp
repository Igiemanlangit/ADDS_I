#include <iostream>
using namespace std;

class Hanoi 
{
public:
    int counter;

    Hanoi() {
        counter = 0;
    }

    void shift(int n, char source, char target, char auxiliary) {
        counter = counter + 1;

        if (n == 1) {
            cout << source << " -> " << target << endl;
        } else if (n > 1) {
            shift(n - 1, source, auxiliary, target);
            cout << source << " -> " << target << endl;
            shift(n - 1, auxiliary, target, source);
        }
    }
};

int main() {
    Hanoi hanoi;
    int disks;

    cout << "Enter number of disks: ";
    cin >> disks;

    cout << "Moves for " << disks << " disks:" << endl;
    hanoi.shift(disks, 'A', 'C', 'B');  // A -> source, C -> target, B -> auxiliary

    cout << "Total moves: " << hanoi.counter << endl;
    return 0;
}
