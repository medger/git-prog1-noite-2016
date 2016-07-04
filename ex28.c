#include <stdio.h>
#include <string.h>
int main()

{
    int i, tam;
    char nome[20];
    
    printf("\nEntre com um nome:\n");
    scanf("%s", nome);
    
    tam = strlen(nome);
    
    if(!(nome[0]>=65 &&nome[0]<=90));
    {
        nome[0] = nome[0] - 32;
    }
    
    for (i=1; i< tam; i++)
    {
        if (nome[i] >=65 && nome[i] <= 90)
        {
            nome[i] = nome[i]+ 32;
        }
    }
    
    printf("\nNme formatado = %s\n", nome);
    
    return 0;
}