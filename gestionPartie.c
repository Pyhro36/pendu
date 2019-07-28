#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caract�re
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas d�j�

    // On lit les autres caract�res m�moris�s un � un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caract�re qu'on a lu
}

int difficulte()
{
    int choix;

    printf("choisissez la difficulte \n 1 FACILE, \n 2 MOYEN, \n 3 DIFFICILE");
   choix = lireCaractere();

    return choix;
}

char* motCache(char* motATrouver)
{
    char* motCache = NULL;
    motCache = malloc(strlen(motATrouver) * sizeof(char));
    int i;
    for(i = 0; i<strlen(motCache); i++)
    {
        motCache[i] = '*';
    }

    return motCache;

}

int testCaractere(char caractereEnCours, const char* trouve, char* cherche)
{
    int i;
    int valide = -1;
    for(i = 0; i < strlen(trouve); i++)
    {
        if(trouve[i] == caractereEnCours)
        {
            valide = 0;
            cherche[i] = trouve[i];
        }
    }

    return valide;
}

