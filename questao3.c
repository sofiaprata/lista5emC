#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.

int main(){
    int num, min;
    int *pmin = &min;
    char escolha;

    *pmin = __INT_MAX__;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num < *pmin) {
            *pmin = num;  // Atualiza o menor valor se necessário
        }

        printf("O menor valor ate agora e: %d\n", *pmin);

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &escolha);  // Espaço antes de %c para consumir o caractere de nova linha

    } while (escolha == 's' || escolha == 'S');

    printf("Programa finalizado. O menor valor fornecido foi: %d\n", *pmin);

    return 0;
}
