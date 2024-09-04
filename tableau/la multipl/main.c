#include <stdio.h>
#include <stdlib.h>

int main()
{
   float NO[5];
int i;
float P;
for (i=0;i<5;i++){
    printf("entrer les valeurs :");
    scanf("%f",&NO[i]);
}
P=1;
for(i=0;i<5;i++)
    P=P*NO[i];

    printf("la multiplication est : %.2f \n",P);

    return 0;
}
