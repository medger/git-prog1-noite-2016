/* Escreva um programa que leia 3 notas de um aluno e a 
média das notas dos exercícios realizados

por ele. Calcular a média de aproveitamento, 
usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A

partir da média, informar o conceito de acordo com a tabela:

maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E
*/
#include <stdio.h>
int main()
{
    char nome[10];
    float MA, N1, N2, N3, ME;
    
    
    printf("Qual seu nome\n");
    scanf("%s", nome);
    printf("%s, qual foi sua nota 1?\n", nome);
    scanf("\n%f", &N1);
    printf("%s, qual foi sua nota 2?\n", nome);
    scanf("\n%f", &N2);
    printf("%s, qual foi sua nota 3?\n", nome);
    scanf("\n%f", &N3);
    printf("%s, qual foi sua nota no trabalho?\n", nome);
    scanf("\n%f", &ME);
    
    (MA = (N1 + N2*2 + N3*3 + ME)/7);
    
    if (MA>=9)
    {
        printf("\nSeu conceito é A\n");
    }
    if (MA>=7.5 && MA<9)
    {
        printf("\nSeu conceito é B\n");
    }
    if (MA>=6 && MA<7.5)
    {
        printf("\nSeu conceito é C\n");
    }
    if (MA>=4 && MA<6)
    {
        printf("\nSeu conceito é D\n");
    }
    else
    {
        printf("\nSeu conceito é E\n");
    }
    
return 0;
}