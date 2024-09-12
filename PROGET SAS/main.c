#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct eleves{
int ID;
char nom[20];
char prenom[20];
char d_naissance[12];
char dep[10];
float N_generale;
};
struct eleves eleve[100];
int count=0;
int id=0;




void Menu(){
    printf("---------------------Menu----------------------\n");
printf("1- Ajouter un etudiant.\n");
printf("2- Modifier un etudiant.\n");
printf("3- Supprimer un etudiant.\n");
printf("4- Afficher les details d'un etudiant.\n");
printf("5- Calculer la moyenne generale.\n");
printf("6- Afficher les statistiques.\n");
printf("7- Rechercher un etudiant.\n");
printf("8- Trier les etudiants.\n");
printf("9- Quitter.\n");
}
void Add(){
        printf("---Etudiant %d\n",count+1);
        printf("Entrez le nom d'etudiant :");
        scanf(" %[^\n]s",&eleve[count].nom);
        printf("Entrez le prenom d'etudiant :");
        scanf(" %[^\n]s",&eleve[count].prenom);
        printf("Entrez la date de naissance (dd/mm/yy) :");
        scanf(" %[^\n]s",&eleve[count].d_naissance);
        printf("Entrez le departement d'etudiant :");
        scanf(" %[^\n]s",&eleve[count].dep);
        printf("Entrez la note generale d'etudiant :");
        scanf("%f",&eleve[count].N_generale);
        eleve[count].ID=++id;
        count++;
}
void Modifier(){
    int Nunique,choix;
    printf("Entrez le numero unique :");
    scanf("%d",&Nunique);
    for (int i=0;i<count;i++){
        if(eleve[i].ID==Nunique){
            printf("1. Modifier le nom d'etudiant : %s\n",eleve[i].nom);
            printf("2. Modifier le prenom d'etudiant : %s\n",eleve[i].prenom);
            printf("3. Modifier la date de naissance d'etudiant : %s\n",eleve[i].d_naissance);
            printf("4. Modifier le departement d'etudiant : %s\n",eleve[i].dep);
            printf("5. Modifier la note generale d'etudiant : %.2f\n",eleve[i].N_generale);
            printf("Entrez votre choix :");
            scanf("%d",&choix);
            switch(choix){
            case 1:
                printf("Entrez le nouveau nom :");
                scanf(" %[^\n]s",&eleve[i].nom);
                break;
            case 2:
                printf("Entrez le nouveau prenom :");
                scanf(" %[^\n]s",&eleve[i].prenom);
                break;
            case 3:
                printf("Entrez la nouvelle date de naissance (dd/mm/aaaa) :");
                scanf(" %[^\n]s",&eleve[i].d_naissance);
                break;
            case 4:
                printf("Entrez le nouveau departement :");
                scanf(" %[^\n]s",&eleve[i].dep);
                break;
            case 5:
                printf("Entrez la nouvelle note generale :");
                scanf("%f",&eleve[i].N_generale);
                break;
            }
        }
    }
}
void Recherche(){
    char Nnom[20];
    char depR[20];
    int choix,N=0;
    printf("1. Chercher par nom.\n");
    printf("2. Chercher par departement.\n");
    printf("Entrez votre choix :");
    scanf("%d",&choix);
    switch(choix){
    case 1:
            printf("Entrez le nom :");
            scanf(" %[^\n]s",&Nnom);
            for(int i=0;i<count;i++){
                if(strcmp(eleve[i].nom,Nnom)==0){
                    printf("le numero unique : %d\n",eleve[i].ID);
                    printf("le nom d'etudiant : %s\n",eleve[i].nom);
                    printf("le prenom d'etudiant : %s\n",eleve[i].prenom);
                    printf("la date de naissance : %s\n",eleve[i].d_naissance);
                    printf("le departement d'etudiant : %s\n",eleve[i].dep);
                    printf("la note generale d'etudiant : %.2f\n",eleve[i].N_generale);
                }
            }

    break;
    case 2:
            printf("Entrez le departement :");
            scanf(" %[^\n]s",&depR);
            for (int i=0;i<count;i++){
            if (strcmp(eleve[i].dep,depR)==0){
                printf("\t\t--Etudiant-- %d :\n",N);
                printf("Le numero unique d'etudiant :%d\n",eleve[i].ID);
                printf("Le nom d'etudiant :%s\n",eleve[i].nom);
                printf("Le prenom d'etudiant :%s\n",eleve[i].prenom);
                printf("La date de naissance d'etudiant :%s\n",eleve[i].d_naissance);
                printf("Le departement d'etudiant :%s\n",eleve[i].dep);
                printf("La note generale d'etudiant :%.2f\n",eleve[i].N_generale);
                N++;
        }
    }
}
}
void Supprimer (){
int sup;
    if (count==0){
        printf("------------------\n");
        printf("il n'y a aucun etudiant.\n");

    }
    else{
    printf("Entrez le numero unique que tu veux supprimer :");
    scanf("%d",&sup);
    for (int i=0;i<count;i++){
        if (eleve[i].ID-sup==0){
                for (int j=i;j<count;j++){
                    eleve[j]=eleve[j+1];
            }
            count--;
        }
      }
    printf("--------------\n");
    printf("Votre etudiant a ete bien supprimer.\n");
  }
}
void Details(){
for (int i=0;i<count;i++){
    printf("\n");
    printf("------- etudiant--%d- \n",i+1);
    printf("\n");
    printf("le numero unique : %d\n",eleve[i].ID);
    printf("le nom d'etudiant : %s\n",eleve[i].nom);
    printf("le prenom d'etudiant : %s\n",eleve[i].prenom);
    printf("la date de naissance d'etudiant : %s\n",eleve[i].d_naissance);
    printf("le departement d'etudiant : %s\n",eleve[i].dep);
    printf("la note generale d'etudiant : %.2f\n",eleve[i].N_generale);

    }
}
void calcul(){
     char T[20][50];
     int countDep=0,cnt=0;
     int stocker = 0;
     float somme = 0,somme_G=0;
     int lengthDep = 0;


        for (int i = 0; i < count; i++){
                stocker=0;
            for (int j = 0; j < i; j++){
                if (strcmp(eleve[i].dep, eleve[j].dep) == 0){
                stocker = 1;
                break;
                }
            }
                if (!stocker){
                      strcpy(T[countDep], eleve[i].dep);
                      countDep++;
                }
        }

        for (int i = 0; i < countDep; i++){
            for (int j = 0; j < countDep; j++){
                if (strcmp(T[i], eleve[j].dep) == 0){
                    somme += eleve[j].N_generale;
                    lengthDep++;
                }
            }
        printf("Le departement %s = %.2f \n",T[i],somme / lengthDep);
        somme_G +=(somme/lengthDep);

        }
        printf("La moyenne generale est :%.2f\n",somme_G/countDep);
    }
void Statistique(){
    int choix;
    char depS[20];
    char depR[20];
    int N=1,C=1,X=1,temp=0;
    float S=0,tempG=0;
    char tempN[100],tempP[100],tempD[100],tempDep[100];
    char T[20][50];
    int countDep=0;
    int stocker = 0;
    float somme = 0;
    int lengthDep = 0;

    printf("1. Afficher le nombre total d'etudiants inscrits.\n");
    printf("2. Afficher le nombre d'etudiants dans chaque departement.\n");
    printf("3. Afficher les etudiants ayant une moyenne generale superieure a un certain seuil.\n");
    printf("4. Afficher les 3 etudiants ayant les meilleures notes.\n");
    printf("5. Afficher le nombre d'etudiants ayant reussi dans chaque departement.\n");
    printf("Entrez votre choix :");
    scanf("%d",&choix);
    switch(choix){
    case 1:
        printf("Le nombre total d'etudiant inscrits : %d.\n",count);
        break;
    case 2:
        for (int i = 0; i < count; i++){
                stocker=0;
            for (int j = 0; j < i; j++){
                if (strcmp(eleve[i].dep, eleve[j].dep) == 0){
                stocker = 1;
                break;
                }
            }

                if (!stocker){
                      strcpy(T[countDep], eleve[i].dep);
                      countDep++;
                }
        }

        for (int i = 0; i < countDep; i++){
                lengthDep=0;
            for (int j = 0; j < count; j++){
                if (strcmp(T[i], eleve[j].dep) == 0){
                    lengthDep++;
                }
            }
        printf("Nombre d'etudiant dans le departement %s = %d \n",T[i],lengthDep);
        }
    break;
    case 3:
        printf("Entrez le seuil :");
        scanf("%f",&S);
        for (int i=0;i<count;i++){
            if(eleve[i].N_generale>=S){
                printf("\t\t--Etudiant-- %d :\n",C);
                printf("Le numero unique d'etudiant :%d\n",eleve[i].ID);
                printf("Le nom d'etudiant :%s\n",eleve[i].nom);
                printf("Le prenom d'etudiant :%s\n",eleve[i].prenom);
                printf("La date de naissance d'etudiant :%s\n",eleve[i].d_naissance);
                printf("Le departement d'etudiant :%s\n",eleve[i].dep);
                printf("La note generale d'etudiant :%.2f\n",eleve[i].N_generale);
                C++;
            }
        }
        break;
    case 4:
        for(int i =0;i<count;i++){
            for(int j=0;j<count;j++){
                if(eleve[j].N_generale<eleve[j+1].N_generale){
                    temp=eleve[j].ID;
                    eleve[j].ID=eleve[j+1].ID;
                    eleve[j+1].ID=temp;
                    strcpy(tempN,eleve[j].nom);
                    strcpy(eleve[j].nom,eleve[j+1].nom);
                    strcpy(eleve[j+1].nom,tempN);
                    strcpy(tempP,eleve[j].prenom);
                    strcpy(eleve[j].prenom,eleve[j+1].prenom);
                    strcpy(eleve[j+1].prenom,tempP);
                    strcpy(tempD,eleve[j].d_naissance);
                    strcpy(eleve[j].d_naissance,eleve[j+1].d_naissance);
                    strcpy(eleve[j+1].d_naissance,tempD);
                    strcpy(tempDep,eleve[j].dep);
                    strcpy(eleve[j].dep,eleve[j+1].dep);
                    strcpy(eleve[j+1].dep,tempDep);
                    tempG=eleve[j].N_generale;
                    eleve[j].N_generale=eleve[j+1].N_generale;
                    eleve[j+1].N_generale=tempG;

                }
            }
        }
        for(int i=0;i<3;i++){
            printf("\n");
            printf("\t\t--Etudiant-- %d :\n",i+1);
            printf("\n");
            printf("Le nom d'etudiant :%s\n",eleve[i].nom);
            printf("Le prenom d'etudiant :%s\n",eleve[i].prenom);
            printf("La date de naissance d'etudiant :%s\n",eleve[i].d_naissance);
            printf("Le departement d'etudiant :%s\n",eleve[i].dep);
            printf("La note generale d'etudiant :%.2f\n",eleve[i].N_generale);
        }
        break;
    case 5:
        for (int i = 0; i < count; i++){
                stocker=0;
            for (int j = 0; j < i; j++){
                if (strcmp(eleve[i].dep, eleve[j].dep) == 0){
                stocker = 1;
                break;
                }
            }

                if (!stocker){
                      strcpy(T[countDep], eleve[i].dep);
                      countDep++;
                }
        }
        for (int i = 0; i < countDep; i++){
                printf("Les etudiants reussi dans le departement %s \n",T[i]);
                lengthDep=0;
            for (int j = 0; j < count; j++){
                if (strcmp(T[i], eleve[j].dep) == 0){
                    if(eleve[j].N_generale>=10)
                            printf("%s : %.2f \n",eleve[j].nom,eleve[j].N_generale);
                }
            }
        }
    }
}

void tri(){
    int choix,choix2;
    int temp=0;
    float tempG=0;
    char tempN[100],tempP[100],tempD[100],tempDep[100];
    printf("Tri alphabetique des etudiants en fonction de leur nom de A a Z .\n");
    printf("Tri des etudiants par moyenne generale, du plus eleve au plus faible ou inversement.\n");
    printf("Tri des etudiants selon leur statut de reussite (ceux ayant une moyenne superieure ou egale a 10/20).\n");
    printf("Entrez votre choix :");
    scanf("%d",&choix);
    switch(choix){
    case 1 :
        for(int i=0;i<count;i++){
            for(int j=0;j<count-1;j++){
                if(strcmp(eleve[j].nom,eleve[j+1].nom)>0){
                    temp=eleve[j].ID;
                    eleve[j].ID=eleve[j+1].ID;
                    eleve[j+1].ID=temp;
                    strcpy(tempN,eleve[j].nom);
                    strcpy(eleve[j].nom,eleve[j+1].nom);
                    strcpy(eleve[j+1].nom,tempN);
                    strcpy(tempP,eleve[j].prenom);
                    strcpy(eleve[j].prenom,eleve[j+1].prenom);
                    strcpy(eleve[j+1].prenom,tempP);
                    strcpy(tempD,eleve[j].d_naissance);
                    strcpy(eleve[j].d_naissance,eleve[j+1].d_naissance);
                    strcpy(eleve[j+1].d_naissance,tempD);
                    strcpy(tempDep,eleve[j].dep);
                    strcpy(eleve[j].dep,eleve[j+1].dep);
                    strcpy(eleve[j+1].dep,tempDep);
                    tempG=eleve[j].N_generale;
                    eleve[j].N_generale=eleve[j+1].N_generale;
                    eleve[j+1].N_generale=tempG;
                }
            }
        }
        for(int i=0;i<count;i++){
            printf("\n");
            printf("\t\t--Etudiant-- %d :\n",i+1);
            printf("\n");
            printf("Le numero unique :%d\n",eleve[i].ID);
            printf("Le nom d'etudiant :%s\n",eleve[i].nom);
            printf("Le prenom d'etudiant :%s\n",eleve[i].prenom);
            printf("La date de naissance d'etudiant :%s\n",eleve[i].d_naissance);
            printf("Le departement d'etudiant :%s\n",eleve[i].dep);
            printf("La note generale d'etudiant :%.2f\n",eleve[i].N_generale);
        }
    case 2:
        printf("1- Tri croissant.");
        printf("2- Tri decroissant.");
        printf("Entrez votre choix :");
        scanf("%d",&choix2);
        switch(choix2){
            case 1:
                for(int i=0;i<count;i++){
                    for(int j=0;j<count-1;j++){
                        if(eleve[j].N_generale>eleve[j+1].N_generale){
                            temp=eleve[j].ID;
                            eleve[j].ID=eleve[j+1].ID;
                            eleve[j+1].ID=temp;
                            strcpy(tempN,eleve[j].nom);
                            strcpy(eleve[j].nom,eleve[j+1].nom);
                            strcpy(eleve[j+1].nom,tempN);
                            strcpy(tempP,eleve[j].prenom);
                            strcpy(eleve[j].prenom,eleve[j+1].prenom);
                            strcpy(eleve[j+1].prenom,tempP);
                            strcpy(tempD,eleve[j].d_naissance);
                            strcpy(eleve[j].d_naissance,eleve[j+1].d_naissance);
                            strcpy(eleve[j+1].d_naissance,tempD);
                            strcpy(tempDep,eleve[j].dep);
                            strcpy(eleve[j].dep,eleve[j+1].dep);
                            strcpy(eleve[j+1].dep,tempDep);
                            tempG=eleve[j].N_generale;
                            eleve[j].N_generale=eleve[j+1].N_generale;
                            eleve[j+1].N_generale=tempG;
                }
            }
        }
        for(int i=0;i<count;i++){
            printf("\n");
            printf("\t\t--Etudiant-- %d :\n",i+1);
            printf("\n");
            printf("Le numero unique :%d\n",eleve[i].ID);
            printf("Le nom d'etudiant :%s\n",eleve[i].nom);
            printf("Le prenom d'etudiant :%s\n",eleve[i].prenom);
            printf("La date de naissance d'etudiant :%s\n",eleve[i].d_naissance);
            printf("Le departement d'etudiant :%s\n",eleve[i].dep);
            printf("La note generale d'etudiant :%.2f\n",eleve[i].N_generale);
        }
                break;
            case 2:
                for(int i=0;i<count;i++){
                    for(int j=0;j<count-1;j++){
                        if(eleve[j].N_generale<eleve[j+1].N_generale){
                            temp=eleve[j].ID;
                            eleve[j].ID=eleve[j+1].ID;
                            eleve[j+1].ID=temp;
                            strcpy(tempN,eleve[j].nom);
                            strcpy(eleve[j].nom,eleve[j+1].nom);
                            strcpy(eleve[j+1].nom,tempN);
                            strcpy(tempP,eleve[j].prenom);
                            strcpy(eleve[j].prenom,eleve[j+1].prenom);
                            strcpy(eleve[j+1].prenom,tempP);
                            strcpy(tempD,eleve[j].d_naissance);
                            strcpy(eleve[j].d_naissance,eleve[j+1].d_naissance);
                            strcpy(eleve[j+1].d_naissance,tempD);
                            strcpy(tempDep,eleve[j].dep);
                            strcpy(eleve[j].dep,eleve[j+1].dep);
                            strcpy(eleve[j+1].dep,tempDep);
                            tempG=eleve[j].N_generale;
                            eleve[j].N_generale=eleve[j+1].N_generale;
                            eleve[j+1].N_generale=tempG;
                }
            }
        }
                    for(int i=0;i<count;i++){
                        printf("\n");
                        printf("\t\t--Etudiant-- %d :\n",i+1);
                        printf("\n");
                        printf("Le numero unique :%d\n",eleve[i].ID);
                        printf("Le nom d'etudiant :%s\n",eleve[i].nom);
                        printf("Le prenom d'etudiant :%s\n",eleve[i].prenom);
                        printf("La date de naissance d'etudiant :%s\n",eleve[i].d_naissance);
                        printf("Le departement d'etudiant :%s\n",eleve[i].dep);
                        printf("La note generale d'etudiant :%.2f\n",eleve[i].N_generale);
                    }
                break;}
            case 3:
                printf("\n-Les etudiants reussi est :\n");
                printf("\n");
                for (int i=0;i<count;i++){
                    if(eleve[i].N_generale>=10){
                        printf("Le numero unique d'etudiant :%d\n",eleve[i].ID);
                        printf("Le nom d'etudiant :%s\n",eleve[i].nom);
                        printf("Le prenom d'etudiant :%s\n",eleve[i].prenom);
                        printf("La date de naissance d'etudiant :%s\n",eleve[i].d_naissance);
                        printf("Le departement d'etudiant :%s\n",eleve[i].dep);
                        printf("La note generale d'etudiant :%.2f\n",eleve[i].N_generale);
                        printf("----------------------------------------\n");
                    }
                }


    }

}

int main()
{
    int choix;
    do{
        Menu();
        printf("Entrez votre choix :");
        scanf("%d",&choix);
        switch(choix){
        case 1:
            Add();
            break;
        case 2:
            Modifier();
            break;
        case 3:
            Supprimer ();
            break;
        case 4 :
            Details();
            break;
        case 5 :
            calcul();
            break;
        case 6:
            Statistique();
            break;
        case 7:
            Recherche();
            break;
        case 8:
            tri();
            break;
        case 9:
            exit(0);
        }

    }while(choix<100);

    return 0;
}

