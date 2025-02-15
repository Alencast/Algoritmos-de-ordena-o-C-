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
void selecao(int num[], unsigned int tam)
{
    int min, aux;
    for(int i = 0; i < (tam-1); i++){
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
    int x, j;
    for (unsigned int i = 1; i < t; i++) {  
        x = a[i];
        j = i - 1;

        while (j >= 0 and a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = x;
    }
}

/* TODO: Implementar função */
void merge_sort(int a[], unsigned int t);
