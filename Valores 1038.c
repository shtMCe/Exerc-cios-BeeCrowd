/* beecrowd | 1038
Lanche
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.



Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal. */

#include <stdio.h>

int main() {
    
    int codigo, quant;
    double total;
    
    scanf("%d %d", &codigo, &quant);
    
    switch (codigo) {
        
        case 1:
            total = 4 * quant;
            printf("Total: R$%.2lf\n", total);
            break;
        case 2:
            total = 4.5 * quant;
            printf("Total: %.2lf\n", total);
            break;
            
        case 3:
            total = 5 * quant;
            printf("Total: R$%.2lf\n", total);
            break;
            
        case 4:
            total = 2 * quant;
            printf("Total: R$%.2lf\n", total);
            break;
            
        case 5:
            total = 1.5 * quant;
            printf("Total: R$%.2lf\n", total);
            break;
    }

    return 0;
}