#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "main.h"
#define LONGUEUR_LIGNE 1000

char* choixMot()
{
    srand(time(NULL));

    FILE* dicco = fopen("dictionnaire.txt", "r");
    int longueurDicco = 0;
    char ligne[LONGUEUR_LIGNE] = "";

    while(fgets(ligne, LONGUEUR_LIGNE, dicco) != NULL)
    {
        longueurDicco++;
    }

    long mystereGen = (pow(10.0 ,rand()) * M_PI);
    long mystere =  mystereGen % (longueurDicco + 1);

    rewind(dicco);

    int i;
    for(i = 0; i < mystere; i++)
    {
        fgets(ligne, LONGUEUR_LIGNE, dicco);
    }

    return ligne;

}

char* ajoutMot(char* mot)
{
    FILE* dicco = fopen("dictionnaire", "a");
    fprintf("\n%s", mot);
}
