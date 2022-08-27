#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;
    int i, quantelementos;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%i", &quantelementos);

    p = (int *)(malloc(quantelementos * sizeof(int)));

    for(i = 0; i < quantelementos; i++){
        p[i] = i;
        printf("Vetor na posicao: %i = %i \n", i+1, p[i]);
    }

    printf("Altere a quanditade de elementos do vetor: ");
    scanf("%i", &quantelementos);

    p = (int *)(realloc(p, quantelementos * sizeof(int)));

    printf("Mesmo Vetor após a alteração de tamanho: ");

    for(i = 0; i < quantelementos; i++){
        p[i] = i;
        printf("Vetor na posicao: %i = %i \n", i+1, p[i]);
    }   




    return 0;
}