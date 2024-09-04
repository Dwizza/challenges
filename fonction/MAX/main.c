#include <stdio.h>
#include <stdlib.h>
void M(){
int n1,n2;
printf("entrez 1er valeur :");
scanf("%d",&n1);
printf("entrez 2eme valeur :");
scanf("%d",&n2);
    if(n1>n2)
        printf("le nb maximum est %d",n1);
    else
        printf("le nb maximum est %d",n2);

}
int main()
{
    M();
    return 0;
}
