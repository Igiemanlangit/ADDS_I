#include "Bubblesort.h"

//6,3,5,7
void Bubblesort::bubblesort(std::vector<int>& array)
{
    int n = array.size();

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; i < n - 1 - i; j++)
        {
            if (array[i] < array[j  + 1])
            {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}
