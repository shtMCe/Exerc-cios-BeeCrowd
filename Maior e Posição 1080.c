/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
*/

#include <stdio.h>

int main()
{
    int num[100];
    int maior=0, posicao;
    
    for (int i=0; i<100; i++){
        
        scanf("%d", &num[i]);
        
        if (maior < num[i]) {
            maior = num[i];
            posicao = i;
        }
        
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}