# Algoritmos de Ordenação em C++

## Introdução 📌

Este projeto tem como objetivo a implementação e análise de desempenho de três algoritmos clássicos de ordenação: **Selection Sort**, **Insertion Sort** e **Merge Sort**. Além disso, foi desenvolvida uma função de verificação para confirmar se um array está em ordem não decrescente.

## Estrutura do Projeto 📂

O projeto é composto pelos seguintes arquivos:

- **ordenacao.cpp** - Contém as implementações dos algoritmos de ordenação.
- **testes/** - Pasta contendo arquivos de testes com diferentes quantidades de elementos, incluindo gráficos e tabelas.
- **README.md** - Este documento.

## Algoritmos Implementados 🛠

### 1. Verificação de Ordenação ✅

A função verifica se um array está em ordem não decrescente.

**Complexidade:** O(n) 📌

### 2. Selection Sort 🔄

O algoritmo de ordenação por seleção busca o menor elemento em cada iteração e troca com a posição correta.

**Complexidade:** O(n²) 📌

### 3. Insertion Sort 📌

O algoritmo de ordenação por inserção constrói o array ordenado inserindo elementos um por um na posição correta.

**Complexidade:** O(n²) no pior caso e O(n) no melhor caso (array já ordenado).

### 4. Merge Sort ⚡

O algoritmo Merge Sort é o algoritmo de ordenação mais eficiente dos três, que segue a abordagem Dividir para Conquistar, dividindo recursivamente o array e mesclando os elementos ordenadamente.

**Complexidade:** O(n log n) 📌

## Testes e Análise de Desempenho 📊

Os testes foram executados em conjuntos de dados de tamanhos variando de 10⁴ a 10⁵ elementos. Os tempos de execução foram registrados e comparados em gráficos.

## Resultados 📈

Os resultados mostraram que:

- **Selection Sort** e **Insertion Sort** tiveram desempenhos insatisfatórios para grandes volumes de dados, devido à complexidade quadrática O(n²). 🚨
- **Merge Sort** foi o mais eficiente, apresentando tempos de execução menores e comportamento consistente com sua complexidade O(n log n). ⚡

### Gráficos de Desempenho 📊

Os tempos de execução foram inseridos em gráficos, comparando os algoritmos para diferentes tamanhos de entrada. Os gráficos estão disponíveis no projeto.

## Conclusão 🔍

A análise confirmou que **Merge Sort** é a melhor escolha para grandes conjuntos de dados, enquanto **Insertion Sort** pode ser eficiente para listas pequenas ou quase ordenadas. **Selection Sort** foi o menos eficiente entre os três algoritmos.

## Como Executar o Programa 🚀

### Compilar 📌

```bash
g++ -Wall -o teste_ordenacao teste_ordenacao.cpp ordenacao.cpp
