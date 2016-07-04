#include <stdio.h>
int main()
{
    int num, fat=1, i;
    printf("digite um numero");
    scanf("%d", &num);
    
    for (i=2;i<=num;i++)
    {
        fat=fat*i;
    }
    
    printf("%d", fat);
}