#include<stdio.h>
#include <stdlib.h>

int plusMoins (int choix, int valeurAtrouver)
{
   
    if (choix < valeurAtrouver)
        printf ("Plus\n");
    else if (choix > valeurAtrouver)
        printf ("Moins\n");
     if (choix == valeurAtrouver)
        printf ("Bingo  \n");
}

int main ()
{
    int choix;
    srand (time (0));
    int valeurAtrouver = rand () % 100;
    printf ("Choisissez un nombre entre 0 et 100 : ");
    scanf ("%d", &choix);
    plusMoins ( choix,  valeurAtrouver);
    while (choix != valeurAtrouver)
        {
            printf ("Choisissez un autre nombre : ");
            scanf ("%d", &choix);
            plusMoins ( choix, valeurAtrouver);
        }
}
