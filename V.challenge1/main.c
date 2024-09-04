#include <stdio.h>
#include <stdlib.h>

int main()
{
   float K,C;
   printf("Entrez la valeur en celsius :");
   scanf("%f",&C);
   K = C + 273.15;
   printf("K = %.2f",K);
    return 0;
}
