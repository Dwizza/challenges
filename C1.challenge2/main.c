#include <stdio.h>
#include <stdlib.h>

int main()
{
     char L;


    printf("Entrez un Lettre : ");
    scanf("%c", &L);


    switch(L) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", L);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", L);
    }

    return 0;
}
