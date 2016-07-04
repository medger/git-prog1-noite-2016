 #include <stdio.h>
 int main()
 {
   float celcius, fah;
   
   printf("\nEntre com graus em Celcius:\n");
   scanf("%f", &celcius);
   
   fah=(celcius*1.8) + 32;
   
   printf("\nO valor em graus Fahrenheit é de: %.2f", fah);
   
return 0;
 }