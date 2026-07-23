/*
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.

Entrada
A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

Saída
Imprima o nome do animal correspondente à entrada fornecida.
*/

#include <stdio.h>
#include <string.h> 

int main()
{
    char entrada[15];
    char entrada2[15];
    char entrada3[15];
    
    scanf("%s", entrada);
    scanf("%s", entrada2);
    scanf("%s", entrada3);
    
    // Comparando strings usando strcmp
    if (strcmp(entrada, "vertebrado") == 0){
        
        if (strcmp(entrada2, "ave") == 0){
            
            if (strcmp(entrada3, "carnivoro") == 0)
                printf("aguia\n");
            else 
                printf("pomba\n");
        }
        
        else if (strcmp(entrada2, "mamifero") == 0) {
            
            if (strcmp(entrada3, "onivoro") == 0)
                printf("homem\n");
            else 
                printf("vaca\n");
        }
    }
    else if { 
        
        if (strcmp(entrada2, "inseto") == 0){
            
            if (strcmp(entrada3, "hematofago") == 0)
                printf("pulga\n");
            else 
                printf("lagarta\n"); 
        }
        
        else if (strcmp(entrada2, "anelideo") == 0) {
            
            if (strcmp(entrada3, "hematofago") == 0)
                printf("sanguessuga\n");
            else 
                printf("minhoca\n");
        }
    }
    
    return 0;
}