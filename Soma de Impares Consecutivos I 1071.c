/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
*/

#include <stdio.h>

int main() {
    int num1, num2, menor, maior, soma = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        menor = num2;
        maior = num1;
    } else {
        menor = num1;
        maior = num2;
    }
    
    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);

    return 0;
}