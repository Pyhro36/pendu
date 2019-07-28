#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include "gestionPartie.h"
#include "gestionDicco.h"

int main()
{
    int essais = 10;
    char* trouve = choixMot();
    char* cherche = motCache(trouve);
    char caractereEnCours;

    int diff = difficulte();

    while(essais > 0 && strcmp(trouve, cherche) != 0)
    {
        printf("il vous reste %d essais avant une mort certaine \n %s \n choisissez une lettre : \n", essais, cherche);
        caractereEnCours = lireCaractere();
        essais += testCaractere(caractereEnCours, trouve, cherche);
    }

    if(essais > 0)
    {
        printf("%s \n bravo, vous avez echappe a une mort certaine !", cherche);
    }
    else
    {
        printf("dommage, mais vous savez ce qui vous attends ...\n accessoiremment le mot etait %s", trouve);
    }

    return 0;
}
