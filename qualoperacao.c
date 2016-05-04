#include <stdio.h>

int main()

{
int num1, num2;
int opc, continuar;
float res;
do
    {
    
    printf("Qual operação deseja?\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    scanf("%d", &opc);
    
    
        printf("\nEntre com num1:");
        scanf("%d", &num1);
        
        printf("\nEntre com num2:");
        scanf("%d", &num2);
    
    switch(opc)
    {
        case 1:
            puts ("Adicao escolhida");
            soma = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            sub = num1 - num2;
            puts ("Subtracao escolhida");
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            multi = num1 * num2;
            puts ("Divisao escolhida");
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            divisao = num1 / num2;
            puts ("Multiplicacao escolhida");
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
    }
    
   printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &continuar);
        
    }while(continuar == 1);
    
    printf("\nBye bye\n");
    
    return 0;
}