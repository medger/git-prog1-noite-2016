#include <stdio.h>
int main()
{
    int N, i, contMedia=0; //inicia o byte 
    float nota, soma=0, media;
    
    printf("\nEntre com o numero de alunos:\n");
    scanf("%d", &N);
    
    for(i=1;i<=N;i++)
    {
        printf("\nEntre com a nota do aluno %d:\n", i);
        scanf("\n%f", &nota);
        soma = soma + nota;
        
        if(nota>5)
            contMedia++;
    }
    
    media = soma / N;
    
    printf("\nMedia da turma = %.2f", media);
    if (contMedia!=0)
    {
        printf("\nExistem %d alunos com media acima de 5.0", contMedia);
    }
    else
    {
        printf("\nNão há nenhum aluno com com nota acima de 5");
    }
return 0;
}