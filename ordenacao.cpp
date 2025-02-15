#include "ordenacao.hpp"

/* TODO: Implementar função */
bool ordenado(int a[], unsigned int t)
{
    for (unsigned int i = 0; i < t - 1; i++) 
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
    unsigned int min, aux; 
    for(unsigned int i = 0; i < (tam-1); i++){ 
        min = i;
        for(unsigned int j = (i+1); j < tam; j++){ 
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
void merge(int a[], unsigned int t, int primeiro, int ultimo){
    int meio;
    if(primeiro < ultimo){
    meio = (primeiro + ultimo) / 2;
    merge(a,t, primeiro, meio);
    merge(a, t, meio+1 , ultimo);
    int meioUpper = meio+1;
    int* temp = new int[((meio - primeiro) + (ultimo - meioUpper) + 2)];
    int i, j, k;
    i = primeiro;
    j = meioUpper;
    k = 0;
    while (i <= meio && j <= ultimo) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
        }
    while (i <= meio)
        temp[k++] = a[i++];
    while (j <= ultimo)
        temp[k++] = a[j++];
    for (i = primeiro, j = 0;i <= ultimo;i++, j++)
        a[i] = temp[j];
    delete[] temp;
    }
} 

void merge_sort(int a[], unsigned int t){
    int primeiro = 0;
    int ultimo = t-1;
    if(!ordenado(a,t)){
        merge(a, t, primeiro, ultimo);
    }
}
