#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[5];
int i,n,x;
for(i=0;i<5;i++){
    printf("entrer la valeur :");
    scanf("%f",&T[i]);
}
printf("saisir la valeur de n :");
scanf("%d",&n);
x=0;
for(i=0;i<5;i++){
    if(n==T[i])
    x++;
}
if(x==0)
printf("%d ne se trouve pas dans le tableau",n);
else
printf("%d se trouve dans le tableau",n);
    return 0;
}
