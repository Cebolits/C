#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Função para embaralhar uma palavra
void embaralhar_palavra(char *palavra) {
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++) {
        int j = rand() % tamanho;
        // Troca os caracteres na posição i e j
        char temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }
}

int main() {
    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));

    // Vetor de palavras
    char *vetor_palavras[] = {"gato", "cachorro", "papagaio", "hamster"};
    int num_palavras = sizeof(vetor_palavras) / sizeof(vetor_palavras[0]);

    // Embaralha cada palavra no vetor
    for (int i = 0; i < num_palavras; i++) {
        embaralhar_palavra(vetor_palavras[i]);
    }

    // Imprime o vetor embaralhado
    for (int i = 0; i < num_palavras; i++) {
        printf("%s\n", vetor_palavras[i]);
    }

    return 0;
}

