#include "ordenacao.hpp"

/* TODO: Implementar função */
bool ordenado(int a[], unsigned int t)
{
    for (int i = 0; i < t - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

/* TODO: Implementar função */
void selecao(int a[], unsigned int t)
{
    int min, aux;
    for(i = 0; i < (tam-1); i++){
        min = i;
        for(int j = (i+1); j < tam; j++){
            if(num[j] < num[min]){
                min = j;
            }
        }
        if(num[i] != num[min]){
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }
}

/* TODO: Implementar função */
void insercao(int a[], unsigned int t)
{
}

/* TODO: Implementar função */
void merge_sort(int a[], unsigned int t);
