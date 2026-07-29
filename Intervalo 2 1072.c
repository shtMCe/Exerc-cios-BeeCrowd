/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.
*/

#include <stdio.h>

int main()
{
    int quant, i;
    int contdentro=0, contfora=0;
    
    scanf("%d", &quant);
    
    int num[quant];
    
    for (i=0; i != quant; i++) {
        
        scanf("%d", &num[i]);
        
        if (num[i] >= 10 && num[i] <= 20)
            contdentro++;
        else 
            contfora++;
        
    }
    
    printf("%d in\n", contdentro);
    printf("%d out\n", contfora);

    return 0;
}