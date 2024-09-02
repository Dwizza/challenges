#include <stdio.h>
#include <stdlib.h>

int main()
{
   float Km,Yards;
   printf("entrer la distance en kilometre :");
   scanf("%f",&Km);
   Yards = Km * 1093.61;
   printf("Yards = %.2f",Yards);
    return 0;
}
