/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
*/

#include <stdio.h>

int main()
{
    double numeros[6];
    double soma=0, media;
    int cont_positivos=0;
    
    for (int i=0; i<6; i++){
        scanf("%lf", &numeros[i]);
        
        // Verifica se é positivo e soma
        if (numeros[i] > 0) {
            soma += numeros[i];
            cont_positivos++;
        }
    }
    
    // Calcula a média usando apenas a quantidade de números positivos
    if (cont_positivos > 0) {
        media = soma / cont_positivos;
    }
    
    printf("%d valores positivos\n", cont_positivos);
    printf("%.1lf\n", media);

    return 0;
}