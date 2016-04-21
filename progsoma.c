#include <stdio.h>

int main()

{   //declara as variaveis
    int num1, num2, soma, sub, multi;
    float div;
    
    //ler dois numeros inteiros
    printf("\nEntre com o primeiro numero");
    scanf("%d", &num1);
    
    printf("\nEntre com o segundo numero");
    scanf("%d", &num2);
    
    //calcular opracoes matematicas basicas
    
    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = (float)num1 / num2;
    
    //imprimir resultado
    printf("\nsoma = %d", soma);
    printf("\nsub = %d", sub);
    printf("\nmulti = %d", multi);
    printf("\ndiv = %f\n", div);
    
    
    return 0;
}