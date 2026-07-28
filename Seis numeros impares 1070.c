/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.
*/

#include <stdio.h>

int main()
{
    int num[5];
    int contpar=0, contimpar=0, contpositivo=0, contnegativo=0;
    
    for (int i=0; i<5; i++){
        
        scanf("%d", &num[i]);
        
        if (num[i] % 2 == 0)
            contpar++;
            
        else 
            contimpar++;
            
            
        if (num[i] > 0)
            contpositivo++;
            
        else if (num[i] < 0)
            contnegativo++;
    }
    
    printf("%d valor(es) par(es)\n", contpar);
    printf("%d valor(es) impar(es)\n", contimpar);
    printf("%d valor(es) positivo(s)\n", contpositivo);
    printf("%d valor(es) negativo(s)\n", contnegativo);
    
    
    return 0;
}