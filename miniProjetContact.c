#include<stdio.h>
#include<stdlib.h>
int count=0;

typedef struct {
    char nom[100],numero[100],adresse[100],email[100];
}Contact;

Contact con[100];

char nam[100],telef[100],Adress[100];

int recherch(char x[100])
{
    int trouve=-1;
    for(int i=0;i<count;i++)
    {

        if(strcmp(con[i].nom,x)==0)
        {
            trouve=i;
            break;
        }
    }
    return trouve;
}
int main()
{

    menuPrincipal();
    return 0;
}
void menuPrincipal();
void menuPrincipal(){
int choix;
    printf("Choisissez un chiffre :\n");
    printf("1. Ajouter .\n");
    printf("2. Afficher .\n");
    printf("3. Rechercher . \n");
    printf("4. modifier. \n");
    printf("5. Supprimer . \n");
    printf("6. Quitter\n");
    scanf("%d", &choix);
     switch(choix) {
        case 1 :    printf("Saisir le nom du contact : ");
                    scanf(" %[^\n]s",&con[count].nom);
                    printf("Saisir numero du contact : ");
                    scanf(" %[^\n]s", &con[count].numero);
                    printf("Saisir le adress du contact : ");
                    scanf(" %[^\n]s", &con[count].adresse);
                    printf("Saisir le email du contact : ");
                    scanf(" %[^\n]s", &con[count].email);
                    count++;
                    menuPrincipal();
                    break;

        case 2 :
            for(int i=0;i<count;i++)
            {printf("%s |  %s |  %s | %s \n", con[i].nom,con[i].numero,con[i].adresse,con[i].email);}
                    menuPrincipal();


        case 3 :  printf("saisir le nom tu veux le supprimer  ");
            scanf(" %[^\n]s",&nam);
            int h=recherch(nam);
            if(h!=-1){
                for(int i=0;i<count;i++)
                {
                    con[i] = con[i+1];
                    count--;
                }
                menuPrincipal();


            }


        case 4 :


            printf("saisir le nom tu veux le mofifier ");
            scanf(" %[^\n]s",&nam);
            int a=recherch(nam);
            if(a!=-1){
                    printf("saisir le nouvelle email  ");
                    scanf(" %[^\n]s",&con[a].adresse);
                    printf("saisir le nouvelle n telefone  ");
                    scanf(" %[^\n]s",&con[a].numero);
            }
                            menuPrincipal();

            break;
        case 5 :
             printf("saisir le nom tu veux le supprimer  ");
            scanf(" %[^\n]s",&nam);
            int k=recherch(nam);
            if(k!=-1){
                for(int i=0;i<count;i++)
                {
                    con[i] = con[i+1];
                    count--;
                }
                menuPrincipal();


            }
            else printf("introuvable");
            menuPrincipal();

             break;
        case 6 : exit;
    }

}
