#include <iostream>
using namespace std;


class Hanoi 
{
    public:

    int counter;


    void shift (int n, char source, char target, char using) {
        counter = counter + 1;



        if (n==1) {
            cout << source << " -> " << target << endl;
        } else if (n>1) {
            shift (n - 1, source, target, using);
            cout << source << " -> " << target << endl;
            shift (n - 1, using, target, source );
            
        }
    }
};