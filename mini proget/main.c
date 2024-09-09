#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct books{
char titre[100];
char auteur[100];
float prix;
int quantite;
};
struct books book[100];
int bookindice=0;
void add(){
    int N;
    printf("\t\tEnrtrez le nombre de livre que tu veux stocker :");
    scanf("%d",&N);
    for(int i=0;i<N;i++){
    printf("\t\t---------------------------------------\n");
    printf("\t\tEntrez le titre du livre :");
    scanf(" %[^\n]s",&book[bookindice].titre);
    printf("\t\tEntrez l'auteur du livre :");
    scanf(" %[^\n]s",&book[bookindice].auteur);
    printf("\t\tEntrez le prix du livre :");
    scanf("%f",&book[bookindice].prix);
    printf("\t\tEntrez la quantite du livre :");
    scanf("%d",&book[bookindice].quantite);
    bookindice++;
    }
}
void affichage(){
    if(bookindice==0){
        printf("\t\t----\n");
        printf("\t\taucun livre a afficher !\n");
        printf("\t\t----\n");
}
    else{
        for(int i=0;i<bookindice;i++){
        printf("\t\t----livre--%d--\n",i+1);
        printf("\n");
        printf("\t\tle titre : %s\n",book[i].titre);
        printf("\t\tl'auteur : %s\n",book[i].auteur);
        printf("\t\tle prix  : %.2f DH\n",book[i].prix);
        printf("\t\tla quantite : %d\n",book[i].quantite);
        printf("\n");

    }
  }
}
void recherche(){
    char titre_r[100];
    int cmp;
    if (bookindice==0){
        printf("\t\t------------\n");
        printf("\t\tIl n'y a pas de livre .\n");
        printf("\t\t------------\n");
    }
    else{
    printf("\t\tEntrez le titre du livre :");
    scanf(" %[^\n]s",&titre_r);
    printf("\t\t-----------------------------------\n");
    for (int i=0;i<=bookindice;i++){
    cmp = strcmp(titre_r,book[i].titre);
    if(cmp == 0){
            printf("\t\tle titre     : %s\n",book[i].titre);
            printf("\t\tl'auteur     : %s\n",book[i].auteur);
            printf("\t\tle prix      : %.2f DH\n",book[i].prix);
            printf("\t\tla quantite  : %d\n",book[i].quantite);
            break;
        }
    else if (i==bookindice)
            printf("\t\tNe se trouve pas ce livre !\n");
            printf("\t\t-----------------------------------\n");
    }
  }
    printf("\n");
}
void MaJ(){
    char titre_maj[100];
    int cmp,nv;
    if (bookindice==0){
        printf("\t\t------------\n");
        printf("\t\tIl n'y a pas de livre .\n");
        printf("\t\t------------\n");
    }
    else{
    printf("\t\tEntrez le titre de livre :");
    scanf(" %[^\n]s",&titre_maj);
    for(int i=0;i<=bookindice;i++){
       cmp=strcmp(book[i].titre,titre_maj);
       if(cmp == 0 ){
        printf("\t\tle titre    :%s\n",book[i].titre);
        printf("\t\tl'auteur    :%s\n",book[i].auteur);
        printf("\t\tle prix     :%f\n",book[i].prix);
        printf("\t\tle quantite :%d\n",book[i].quantite);
        printf("\t\t-------------------\n");
        printf("\t\tEntre la nouvelle quantite :");
        scanf("%d",&nv);
        book[i].quantite=nv;
        printf("\t\t-------------------\n");
        printf("\t\tVotre mise a jour a ete bien effectuer .\n");
        break;
       }
        else if (i==bookindice)
            printf("\t\tle livre ne se trouve pas !\n");
    }

    }
}
void sup(){
    char titre_s[100];
    int cmp;
    if (bookindice==0){
        printf("\t\t------------\n");
        printf("\t\tIl n'y a pas de livre .\n");
        printf("\t\t------------\n");
    }
    else{
    printf("\t\tEntre le titre de livre que tu veux supprimer : ");
    scanf(" %[^\n]s",&titre_s);
    for(int i = 0;i<=bookindice;i++){
        cmp=strcmp(book[i].titre,titre_s);

        if (cmp == 0){
                for(int j=i;j<bookindice;j++)
                book[j]=book[j+1];
                printf("\t\t-------------------\n");
                printf("\t\tVotre livre a ete bien suprimee !\n");
        }

    }
bookindice--;
    }

}
void nbrT(){
        printf("\t\t------------\n");
        printf("\t\tLe nombre total du livre est : %d\n",bookindice);
        printf("\t\t------------\n");
}

void menu (){
    printf("\t\t###################--Menu--##################\n");
    printf("\n");
    puts("\t\t1- Ajouter un livre au stock.");
    puts("\t\t2- Afficher tous les livres disponibles.");
    puts("\t\t3- Rechercher un livre par son titre.");
    puts("\t\t4- Mettre a jour la quantite d'un livre.");
    puts("\t\t5- Supprimer un livre du stock.");
    puts("\t\t6- Afficher le nombre total de livres en stock.");
    puts("\t\t7- Quitter .");
}

int main()
{
    int C;

    do{
        menu();
        printf("\t\t---------------------------------------\n");
        printf("\t\tEntrez votre choix:");
        scanf("%d",&C);
        printf("\n");
        switch (C){
            case 1 :
                add();
                break;
            case 2 :
                affichage();
                break;
            case 3 :
                recherche();
                break;
            case 4 :
                MaJ();
                break;
            case 5 :
                sup();
                break;
            case 6 :
                nbrT();
                break;
            case 7 :
                exit(0);


                }

    }while (C<100);




    return 0;
}
