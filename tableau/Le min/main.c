#include <stdio.h>
#include <stdlib.h>

int main()
{
float NO[5];
int i;
float S,min;
for (i=0;i<5;i++){
    printf("entrer les valeurs :");
    scanf("%f",&NO[i]);
}
min=NO[0];
for (i=1;i<5;i++){
    if(min>NO[i])
    min = NO[i];
}
printf("le min nombre est : %.1f",min);
    return 0;
}
