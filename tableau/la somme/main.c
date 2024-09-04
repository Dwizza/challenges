#include <stdio.h>
#include <stdlib.h>

int main()
{
    float NO[5];
int i;
float S;
for (i=0;i<5;i++){
    printf("entrer les valeurs :");
    scanf("%f",&NO[i]);
}
S=0;
for(i=0;i<5;i++)
    S=S+NO[i];

    printf("la somme est : %.2f \n",S);
    return 0;
}
