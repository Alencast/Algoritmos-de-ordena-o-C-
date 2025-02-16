# Algoritmos de Ordenação em C++ 🚀

## Introdução 📚

Este projeto tem como objetivo a implementação e análise de desempenho de três algoritmos clássicos de ordenação: **Selection Sort**, **Insertion Sort** e **Merge Sort**. Além disso, foi desenvolvida uma função de verificação para confirmar se um array está em ordem não decrescente.

---

## Estrutura do Projeto 🗂️

O projeto é composto pelos seguintes arquivos:

- **📄 ordenacao.cpp** - Contém as implementações dos algoritmos de ordenação.
- **📁 testes/** - Pasta contendo arquivos de testes com diferentes quantidades de elementos, incluindo gráficos e tabelas.
- **📄 README.md** - Este documento.

---

## Algoritmos Implementados 💻

### 1. Verificação de Ordenação ✅

A função verifica se um array está em ordem não decrescente.

**Complexidade:** ⏳ O(n)

---

### 2. Selection Sort 🔍

O algoritmo de ordenação por seleção busca o menor elemento em cada iteração e troca com a posição correta.

**Complexidade:** ⏳ O(n²)

---

### 3. Insertion Sort 📥

O algoritmo de ordenação por inserção constrói o array ordenado inserindo elementos um por um na posição correta.

**Complexidade:** ⏳ O(n²) no pior caso e O(n) no melhor caso (array já ordenado).

---

### 4. Merge Sort 🔄

O algoritmo Merge Sort é o algoritmo de ordenação mais eficiente dos três, que segue a abordagem **Dividir para Conquistar**, dividindo recursivamente o array e mesclando os elementos ordenadamente.

**Complexidade:** ⏳ O(n log n)

---

## Testes e Análise de Desempenho 📊

Os testes foram executados em conjuntos de dados de tamanhos variando de **10⁴ a 10⁵ elementos**. Os tempos de execução foram registrados e comparados em gráficos.

### Tabela - CASO01

| Entradas | Merge-sort | Inserção  | Seleção   |
|----------|------------|-----------|-----------|
| 10000    | 6006       | 115672    | 348594    |
| 20000    | 13510      | 471029    | 1074069   |
| 30000    | 27396      | 1074921   | 2276785   |
| 40000    | 34845      | 4995326   | 3872579   |
| 50000    | 44001      | 3504161   | 6075050   |
| 60000    | 31746      | 5850323   | 8975544   |
| 70000    | 38648      | 6210486   | 11616816  |
| 80000    | 43475      | 7746069   | 15141889  |
| 90000    | 48673      | 9662725   | 19337173  |
| 100000   | 48019      | 12406003  | 27685160  |

---

### Tabela - CASO02

| Entradas | Merge-sort | Inserção  | Seleção   |
|----------|------------|-----------|-----------|
| 10000    | 4001       | 240209    | 219846    |
| 20000    | 9004       | 1123963   | 870512    |
| 30000    | 10001      | 2406353   | 2109350   |
| 40000    | 14997      | 4684996   | 3730550   |
| 50000    | 17074      | 6832790   | 5434505   |
| 60000    | 20458      | 9125212   | 7764629   |
| 70000    | 21000      | 12659024  | 10990623  |
| 80000    | 24995      | 15296369  | 13996655  |
| 90000    | 36000      | 20835314  | 18272233  |
| 100000   | 31999      | 24412504  | 26294440  |

---

### Tabela - CASO03

| Entradas | Merge-sort | Inserção  | Seleção   |
|----------|------------|-----------|-----------|
| 10000    | 4001       | 240209    | 219846    |
| 20000    | 9004       | 1123963   | 870512    |
| 30000    | 10001      | 2406353   | 2109350   |
| 40000    | 14997      | 4684996   | 3730550   |
| 50000    | 17074      | 6832790   | 5434505   |
| 60000    | 20458      | 9125212   | 7764629   |
| 70000    | 21000      | 12659024  | 10990623  |
| 80000    | 24995      | 15296369  | 13996655  |
| 90000    | 36000      | 20835314  | 18272233  |
| 100000   | 31999      | 24412504  | 26294440  |

---

### Tabela - CASO04

| Entradas | Merge-sort | Inserção | Seleção   |
|----------|------------|----------|-----------|
| 10000    | 5007       | 21491    | 404422    |
| 20000    | 9278       | 265154   | 1091400   |
| 30000    | 13983      | 552931   | 2599016   |
| 40000    | 22017      | 92473    | 7752223   |
| 50000    | 25007      | 90779    | 7899793   |
| 60000    | 25994      | 97427    | 10745861  |
| 70000    | 96532      | 648771   | 31217765  |
| 80000    | 90510      | 1108059  | 14783823  |
| 90000    | 45778      | 151210   | 25914339  |
| 100000   | 61081      | 199609   | 66596755  |

### Tabela - CASO05

| Entradas | Merge-sort | Inserção  | Seleção   |
|----------|------------|-----------|-----------|
| 10000    | 5000       | 279767    | 255602    |
| 20000    | 11008      | 289857    | 1005306   |
| 30000    | 18002      | 2230423   | 2238860   |
| 40000    | 18046      | 3910689   | 4345087   |
| 50000    | 20986      | 5959916   | 6102183   |
| 60000    | 28988      | 8801367   | 8754941   |
| 70000    | 33978      | 11668717  | 12201218  |
| 80000    | 32521      | 15925345  | 16375042  |
| 90000    | 35018      | 19276105  | 19624745  |
| 100000   | 42011      | 23533213  | 23975841  |

---
![Gráfico caso01](caminho/para/imagem.png)


## Resultados 📈

Os resultados mostraram que:

- **Selection Sort** e **Insertion Sort** tiveram desempenhos insatisfatórios para grandes volumes de dados, devido à complexidade quadrática O(n²). 🐢
- **Merge Sort** foi o mais eficiente, apresentando tempos de execução menores e comportamento consistente com sua complexidade O(n log n). 🚀

---

### Gráficos de Desempenho 📉

Os tempos de execução foram inseridos em gráficos, comparando os algoritmos para diferentes tamanhos de entrada. Os gráficos estão disponíveis no projeto.

---

## Conclusão 🎯

A análise confirmou que:

- **Merge Sort** é a melhor escolha para grandes conjuntos de dados. 🏆
- **Insertion Sort** pode ser eficiente para listas pequenas ou quase ordenadas. 🎯
- **Selection Sort** foi o menos eficiente entre os três algoritmos. 🐌

---

## Como Executar o Programa ▶️

### Compilar

```bash
g++ -Wall -o teste_ordenacao teste_ordenacao.cpp ordenacao.cpp

### Para executar

```bash
  ./teste_ordenacao

### Para o manual do programa

```bash
  ./teste_ordenacao -h

### Para executar o teste no arquivo 'e1.txt' e gerar a saída no arquivo 's1.txt'.

```bash
  ./teste_ordenacao < e1.txt > s1.txt

OBS: O padrão é ordenação por seleção.

### Para definir ordenação por inserção do arquivo 'e1.txt' e gerar o arquivo 's1.txt'.

```bash
  ./teste_ordenacao -i < e1.txt > s1.txt

```bash
  ./teste_ordenacao -m < testes/caso01/exemplo-1000-1.txt >> s1.txt 2>&1


### Para definir ordenação por seleção do arquivo 'e1.txt' e gerar o arquivo 's1.txt'.

```bash
  ./teste_ordenacao -s < e1.txt > s1.txt

### Para definir ordenação por merge-sort do arquivo 'e1.txt' e gerar o arquivo 's1.txt'.

```bash
  ./teste_ordenacao -m < e1.txt > s1.txt
