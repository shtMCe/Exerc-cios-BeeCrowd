/*
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
*/

#include <stdio.h>

int main()
{
    int numeros[5];
    int cont_pares=0;
    
    for (int i=0; i<5; i++){
        
        scanf("%d", &numeros[i]);
        
        // Verifica se é par
        if (numeros[i] % 2 == 0) {
            
            cont_pares++;
        }
    }
    
    printf("%d valores pares\n", cont_pares);
    
    return 0;
}