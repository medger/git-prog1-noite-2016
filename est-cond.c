#include <stdio.h>

int main()

{
    int num, resto;
    
        printf("Digite um numero\n");
        scanf("%d", &num);
        
        resto = num % 2;
        
        if(resto == 1)
        {
            printf("\nEste numero eh IMPAR\n");
        }
        
        else
        {
            printf("\nEste numero eh PAR\n");
        }
        
        return 0;
}