#include <stdio.h>

int main()
{
    char nome[30][15];
    int i,j;
    float nota[30];
    
    for(i=0; i<=29; i++)
    {
        printf("Digite o nome do aluno %d\n", i+1);
        scanf("%s", nome[i]);
        printf("Digite a nota de %s\n", nome[i]);
        scanf("%f", &nota[i]);
        
    }
    
    for(i=0; i<=29; i++)
    {
        for(j=i+1; j<=29; j++)
        {
            if(nota[i]<nota[j])
            {
                int aux;
                aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;
            }
        }
    }
    
    printf("\tNOME \t\tNOTA");
    printf("\n___________________________________\n");
    for(i=0; i<=29; i++)
    {
        printf("\t%s \t\t%.2f\n", nome[i], nota[i]);
    }
    
    return 0;
}