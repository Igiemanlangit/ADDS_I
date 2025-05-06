#include "Insertionsort.h"

//6,3,5,7,1,4
void Insertionsort::insertionsort(std::vector<int>& array)
{
    int n = array.size();


    for (int i = 1; i < n; i++ )
    {
        int key = array[i];
        int j = i - 1;

        while (j>=0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        };

        array[j + 1] = key;
    }
}