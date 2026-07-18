/* beecrowd | 1019
Conversão de Tempo
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido. */


#include <stdio.h>

int main() {

    int n_segtotal;
    int hor, min, seg;
    
    scanf("%d", &n_segtotal);
    
    hor = n_segtotal / 3600;
    
    min = (n_segtotal % 3600) / 60;
    
    seg = n_segtotal % 60;
    
    printf("%d:%d:%d\n", hor, min, seg);
    
    return 0;
}

