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
}

/* TODO: Implementar função */
void insercao(int a[], unsigned int t)
{
}

/* TODO: Implementar função */
void merge_sort(int a[], unsigned int t);
