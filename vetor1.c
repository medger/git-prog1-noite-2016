#include <stdio.h>
int main()
{
    float av1[10];
    int i;
    float media, somaAv1=0;
    
    for (i=0; i<=9; i++)
    {
        printf("\nEntre com a Av1 do aluno %d\n", i+1);
        scanf("%f", &av1[i]);
        somaAv1 = somaAv1+av1[i];
    }
    media = somaAv1/i;
    printf("Media da turma é igual = %.2f\n", media);
    
    
return 0;
}
