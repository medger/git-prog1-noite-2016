#include <stdio.h>

int main ()
{
    float num1, num2, div, mult, sub, som;
    
    
    printf("Digite o primeiro numero");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero");
    scanf("%f", &num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divisao = num1 / num2;
    
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
}