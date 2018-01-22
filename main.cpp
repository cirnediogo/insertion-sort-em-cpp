/* 
 * File:   main.cpp
 * Author: ubuntu
 *
 * Created on 21 de Novembro de 2009, 07:32
 */

#include <stdlib.h>
#include <iostream>
using namespace std;
/*
 * 
 */
void insertionSort(int vet[], int tam) {
    int i, j;
    int aux;
    for (i = 1; i < tam; i++) {
        aux = vet[i];
        j = i-1;
        while (vet[j]>aux && j >= 0) {
            vet[j+1] = vet[j];
            j = j-1;
        };
        vet[j+1] = aux;
    };
}

void imprime(int vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << vet[i] << " ";
    };
    cout << endl;
}

int main(int argc, char** argv) {
    int vetor[10] = {4, 2, 5, 3, 1, 6, 9, 4, 7, 8};
    imprime(vetor, 10);
    insertionSort(vetor, 10);
    imprime(vetor, 10);

    return (EXIT_SUCCESS);
}

