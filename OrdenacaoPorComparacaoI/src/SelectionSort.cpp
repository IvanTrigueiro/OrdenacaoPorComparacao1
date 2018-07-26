#include "SelectionSort.h"

SelectionSort::SelectionSort()
{
    //ctor
}

SelectionSort::SelectionSort(int dado[], int n)
{
    int i, j, menor, menorIndex;

    for(i = 0; i < n-1; i++){
        menor = dado[i];
        menorIndex = i;

        for(j = i+1; j < n; j++){
            if(dado[j] < menor){
                menor = dado[j];
                menorIndex = j;
            }
        }
        if(menor != i){
            swap(dado[i], dado[menorIndex]);
        }
    }
}

SelectionSort::~SelectionSort()
{
    //dtor
}
