#include <stdio.h>
#include <math.h>

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
        printf("1-Raiz quadrada\n");
        printf("2-Subtração\n");
        printf("3-Subtração\n");
        printf("4-Divisão\n");
        
        printf("\n\nOpção:");
        scanf("%d", &menu);
        
        printf("Entre com o Primeiro Número:\n");
        scanf("%d", &num1);
        
        
    
        
        switch(menu)
        {
            case 1://raiz
                resultado = sqrt(num1);
                printf("\nResultado: raiz de %d  = %.2f", num1,  resultado);
                break;
            case 2://Subtração
                resultado= pow(num1, 2);
                printf("\nResultado: pot(%d) ao quadrado = %.2f", num1, resultado);
                break;
            
        }
        
        printf("\nDeseja Continuar? (1-s/2-n)");
        scanf("%d", &continuar);
     
    } while(continuar==1);
    
    return 0;
}
