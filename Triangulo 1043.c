/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
*/

#include <stdio.h>

int main(){
    
    double A, B, C;
    double result;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if ( A+B > C && A+C > B && B+C > A){
        
        result = A + B + C;
        
        printf("Perimetro = %.1lf\n", result);
        
    }
    
    else {
        
        result = (A + B) * C; 
        result = result / 2;
        
        printf("Area = %.1lf\n", result);
    }

    return 0;
}