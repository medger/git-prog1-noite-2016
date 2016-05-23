#include <stdio.h>
int main()
{
    float av1[10];
    int i, qtdMaior;
    float media, somaAv1=0;
    float maior=-999;
    
    for (i=0; i<=9; i++)
    {
        printf("\nEntre com a Av1 do aluno %d\n", i+1);
        scanf("%f", &av1[i]);
        somaAv1 = somaAv1+av1[i];
        
         if (av1[i]>maior)
        {
            maior = av1[i];
        }
    }
    
    
    media = somaAv1/i;
    
    printf("Media da turma é igual = %.2f\n", media);
    
    for (i=0; i<=9; i++)
    {
        if(av1[i]>=media)
       {
            printf("\nNota maior a media - %.2f\n", av1[i]);
       }
    
       if (av1[i]==maior)
       {
           qtdMaior++;
       }
       
    }
    printf("\n %d alunos tiraram a maior nota que foi %.2f\n", qtdMaior, maior);
    
    
return 0;
}
