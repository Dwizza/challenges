#include <stdio.h>
#include <stdlib.h>

int main()
{
      int N;


    printf("Entrez un nombre: ");
    scanf("%d", &N);


    if (N % 2 == 0) {
        printf("%d est un nombre pair.\n", N);
    } else {
        printf("%d est un nombre impair.\n", N);
    }
    return 0;
}
