 #include <stdio.h>
 
  float fahrenheit(float celcius)
  {
   float fah;
     fah=(celcius*1.8) + 32;
   return fah;
  }
 int main()
 {
   float celcius, fah;
   printf("\nEntre com graus em Celcius:\n");
   scanf("%f", &celcius);
   fah = fahrenheit(celcius);
   printf("\nO valor em graus Fahrenheit é de: %.2f", fah);
   
return 0;
 }