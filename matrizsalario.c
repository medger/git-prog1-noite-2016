#include <stdio.h>
int main()

{
    char nomes[5][20];
    float salarios[5];
    int i;
    
    for (i=0;i<=4;i++)
    {
    
        printf("\nEntre com o nome do %dº funcionário\n", i+1);
        scanf("%s", nomes[i]);
        
        printf("Entre com o salário do %dº funcionário\n", i+1);
        scanf("%f", &salarios[i]);
    }
    
    printf("\nNome\tSal. Bruto\tSal. Liquido\n");
    printf("____________________________________\n");
    for (i=0;i<=4;i++)
    {
        printf("\n%s \t%.2f \t\t%.2f", nomes[i], salarios[i], salarios[i]*0.8);
        
    }
    
    printf("\n");
    return 0;
}