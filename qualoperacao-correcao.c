#include <stdio.h>
int main()
{
    int menu;
    int num1, num2;
    int continuar;
    float resultado;
    
    do
    {
        
    
        //menu
        printf("Qual operação você deseja?\n");
        printf("1-Adição\n");
        printf("2-Subtração\n");
        printf("3-Subtração\n");
        printf("4-Divisão\n");
        
        printf("\n\nOpção:");
        scanf("%d", &menu);
        
        printf("Entre com o Primeiro Número:\n");
        scanf("%d", &num1);
        
         printf("Entre com o Segundo Número:\n");
        scanf("%d", &num2);
    
        
        switch(menu)
        {
            case 1://Soma
                resultado=num1+num2;
                printf("\nResultado: %d + %d = %.2f", num1, num2, resultado);
                break;
            case 2://Subtração
                resultado=num1-num2;
                printf("\nResultado: %d - %d = %.2f", num1, num2, resultado);
                break;
            case 3://Multiplicação
                resultado=num1*num2;
                printf("\nResultado: %d * %d = %.2f", num1, num2, resultado);
                break;
            case 4://Divisao
                resultado=(float)num1/num2;
                printf("\nResultado: %d / %d = %.2f", num1, num2, resultado);
                break;
                
        }
        
        printf("\nDeseja Continuar? (1-s/2-n)");
        scanf("%d", &continuar);
     
    } while(continuar==1);
    
    return 0;
}
