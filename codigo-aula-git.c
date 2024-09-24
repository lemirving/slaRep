#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char nome[20];
} ListaNomes;

int main(int argc, char const *argv[]) {
    ListaNomes variosNomes[10];
    srand(time(NULL));
    int i = rand() % 10; // Índice aleatório entre 0 e 9

    FILE *nomes = fopen("nomes.txt", "r");
    if (nomes == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    int numNomes = 0;
    while (fscanf(nomes, "%s", variosNomes[numNomes].nome) != EOF) {
        numNomes++;
    }

    fclose(nomes);

    if (numNomes == 0) {
        printf("Nenhum nome encontrado no arquivo.\n");
        return 1;
    }

    printf("Essa é a aula de git\n");
    printf("Sortearemos um nome aleatorio: \n");

    printf("Nome: %s\n\n", variosNomes[i].nome);

    return 0;
}