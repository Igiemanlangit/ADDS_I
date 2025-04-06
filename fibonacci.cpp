#include <iostream>


int fib(int n)
{
    if (n == 0)
    {
        return 0;
    } 
    else if (n == 1)
    {
        return 1;
    } 
    else
    {
        return fib (n - 1) + fib (n - 2);
    }

};

int main ()
{
    int n;

    std::cout << "how many? " << std::endl;

    std::cin >> n;


    std::cout << "number: " << fib(n);
    return 0;
}

program 1
#include <iostream>
using namespace std;

void foo(int n)
{
    if (n == 0)
    {
        return;
    } else {
    cout << n;
    return foo(n-1);
    }

}
int main() {
    foo(3);
    return 0;
}


program 2
#include <iostream>
using namespace std;

void foo(int n)
{
    if (n == 0)
    {
        return;
    } else
    {
    foo(n-1);
    cout << n;
    }
   
}
int main() {
    foo(3);
    return 0;
}