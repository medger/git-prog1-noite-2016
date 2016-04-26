#include <stdio.h>

int main()

{
    //declara as variaveis
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    
    if (idade<=15)
    {
        printf("\nVocê não pode votar\n");
    }
    if (idade>=18 && idade<=70)
    {
        printf("Você é obrigado a votar!\n");
    }
    else
    {
        printf("O voto é facultativo\n");
    }
    
    return 0;
}