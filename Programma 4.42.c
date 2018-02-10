#include <stdio.h>

int tempCF(int tempC);

int main() {
      
      int t, tmpF;
      printf("Inserisci un valore in C: ");
      scanf("%d", &t);
      tmpF = tempCF(t);
      printf("%dF (%dC)", tmpF, t);
      return 0;
      
 }
 
 int tempCF(int tempC)
 {
 int tempF;
 tempF = (tempC * 1.8) + 32;
 return tempF;
 }
