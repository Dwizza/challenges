#include <stdio.h>
#include <stdlib.h>

int main()
{
  float NO[5];
int i;
float S,max;
for (i=0;i<5;i++){
    printf("entrer les valeurs :");
    scanf("%f",&NO[i]);
}
max=NO[0];
for (i=1;i<5;i++){
    if(max<NO[i])
    max = NO[i];
}
printf("le max nombre est : %.1f",max);

    return 0;
}
