#include "InsertionSort.h"

InsertionSort::InsertionSort()
{
    //ctor
}

InsertionSort::InsertionSort(int dados[], int n)
{
    int i, j, atual;
    for(i = 0; i < n; i++)
    {
        atual = dados[i];
        j = i-1;

        while(j >= 0 && dados[j] > atual)
        {
            dados[j+1] = dados[j];
            j = j-1;
        }
        dados[j+1] = atual;
    }
}

InsertionSort::~InsertionSort()
{
    //dtor
}
