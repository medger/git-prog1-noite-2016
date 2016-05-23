#include <stdio.h>
int main()

{
    char lt;
    
    printf("\nEntre com uma letra em CAIXA ALTA\n");
    lt = getchar();
    
    printf("\nCaracter lido = %c\n", lt);
    printf("\nCodigo ASCii = %d\n", lt);
    printf("\nCaracter lido CAIXA BAIXA =%c\n", lt+32);
    
    
    return 0;
}