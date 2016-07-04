#include <stdio.h>
int main()
{
    int N1, N2, aux=0;
    printf("Qual o numero 1?\n");
    scanf("%d", &N1);
    printf("Qual o numero 2?\n");
    scanf("%d", &N2);
    
    printf("\nO valor antes da TROCA: N1:%d e N2: %d", N1, N2);
   
    aux = N1;
    N1 = N2;
    N2 = aux;
    
    printf("\nO valor antes da TROCA: N1:%d e N2: %d", N1, N2);
    
return 0;
}