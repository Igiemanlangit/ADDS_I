#include "Selection.h"


//5,4,3,2,1
void Selection::selectionSort(std::vector<int>& array)
{
    int n = array.size();

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
    {
        if (array[j] < array[i])
        {
            std::swap(array[i], array[j]);
        }
    }
    }
}
