/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.
*/

#include <stdio.h>

int main()
{
    double salario;
    double novo;
    double reajuste;
    
    scanf("%lf", &salario);
    
    if (salario <= 400 && salario > 0) {
        
        reajuste = salario * 0.15;
        
        novo = salario + reajuste;
        
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 15 %\n");
        
    }
    
    else if (salario > 400 && salario <= 800) {
        
        reajuste = salario * 0.12;
        
        novo = salario + reajuste;
        
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 12 %\n");
        
    }
    
    else if (salario > 800 && salario <= 1200) {
        
        reajuste = salario * 0.10;
        
        novo = salario + reajuste;
        
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 10 %\n");
        
    }
    
    else if (salario > 1200 && salario <= 2000) {
        
        reajuste = salario * 0.07;
        
        novo = salario + reajuste;
        
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %\n");
        
    }
    
    else if (salario > 2000) {
        
        reajuste = salario * 0.04;
        
        novo = salario + reajuste;
        
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 4 %\n");
        
    }

    return 0;
}