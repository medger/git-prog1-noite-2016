#include <stdio.h> 
#include <string.h>

int emaiusculo(char letra)
{
    if (letra>=65 && nome[i] <=90)
    {
        return 1;
    }
    else            //ACHAR O ERRO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    {
        return 0;
    }
}
int main()
{
    int i, tam;
    char nome[20];
    
    printf("\nEntre com um nome:\n");
    scanf("%s", nome);
    
    tam = strlen(nome);
    
    if(!emaiusculo(nome[0])) //nao eh maiuscula
    {
        nome[0] = nome[0] - 32; //transforma em maiscula
    }
    
    for (i=1; i< tam; i++)
    {
        if (emaiusculo(nome[0])) //maiscula
        {
            nome[i] = nome[i]+ 32;
        }
    }
    
    printf("\nNme formatado = %s\n", nome);
    
    return 0;
}