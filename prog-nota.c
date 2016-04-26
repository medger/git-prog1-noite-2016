#include <stdio.h>

float main()

{
    float nota;
    printf("\nQual foi sua nota?\n");
    scanf("%f", &nota);
    
    if (nota<5.0)
    {
        printf("\nInfelizmente você foi reprovado\n");
    }
    
    else if (nota>5.1&&nota<6.9)
    {
        printf("\nVocê está de recuperação, estude mais\n");
    }
    
    else if (nota>7.0&&nota<=10)
    {
        printf("\nVocê foi aprovado, parabéns!!!\n");    
    }
 
 
    return 0;
}