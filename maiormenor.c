#include <stdio.h>

int main()
{
    int num;
    int resp;
    int maior=-999, menor=1000;
    
    do
    {
        printf("\nEntre com um numero [1-100]\n");
        scanf("%d", &num);
        
        //descobrir maior e menor
        
        if(num>maior)
            maior=num;
            
        if(num<menor)
            menor=num;
        
        
        printf("\nDeseja continuar? [1-S/2-N]\n");
        scanf("%d", &resp);
    }
    while (resp==1);
    printf("\nMaior numero = %d\n", maior);
    printf("\nMenor numero = %d\n", menor);
    
    return 0;
}