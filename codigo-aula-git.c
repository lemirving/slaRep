#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    char nome[20];
}ListaNomes;

int main(int argc, char const *argv[]){
    
    ListaNomes variosNomes[20];

    FILE *nomes = fopen("nomes.txt","r++");
    if(nomes == NULL)
        exit;

    

    printf("Essa é a aula de git\n");
    printf("Sortearemos um noem aleatorio: \n");


    // printf("Nome: %s",nome);

    return 0;
}
