#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int plusMoins (int choix, int valeurAtrouver)
{
   
    if (choix < valeurAtrouver)
        printf ("Plus\n");
    else if (choix > valeurAtrouver)
        printf ("Moins\n");
     if (choix == valeurAtrouver)
        printf ("Bingo  \n");
}

int Levels(choix,valeurAtrouver)
{
    
}
int main ()
{
    int i;
    int facile = 0;
    int moyen = 1 ;
    int difficile= 10 ; 
    int level;
    int choix;
    srand (time (0));
    int valeurAtrouver = rand() % 100;
    printf ("Choix de niveau. Tapez 0 pour facile, 1 pour moyen et 10 pour difficile : ");
     scanf ("%d", &level);
     
    if (level == facile)
    {
        printf ("Choisissez un nombre :");
        scanf ("%d", &choix);
        plusMoins ( choix,  valeurAtrouver);
        while (choix != valeurAtrouver)
        {
            printf ("Choisissez un autre nombre :");
            scanf ("%d", &choix);
            plusMoins ( choix, valeurAtrouver);
        }
    }
    
    else if (level == moyen)
    {
        printf ("Choisissez un nombre :");
        scanf ("%d", &choix);
        plusMoins ( choix,  valeurAtrouver);
        while (choix != valeurAtrouver)
        {
            for (i=0; i<25; i++)
                {
                    printf ("Choisissez un autre nombre :");
                    scanf ("%d", &choix);
                    plusMoins ( choix, valeurAtrouver);
                }
        }
    }
    
    else if (level == difficile )
    {
        printf ("Choisissez un nombre :");
        scanf ("%d", &choix);
        plusMoins ( choix,  valeurAtrouver);
        while (choix != valeurAtrouver)
        {
            for (i=0; i<10; i++)
                {
                    printf ("Choisissez un autre nombre :");
                    scanf ("%d", &choix);
                    plusMoins ( choix, valeurAtrouver);
                }
        }
    }
    
    else 
        printf ("0, 1 ou 10 on a dit");
}
