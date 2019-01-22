#include <stdio.h>
#include <stdlib.h>
#include "vecteur2.h"

int main()
{
    int choix=0;
    tVecteur2 vecteurA;
    tVecteur2 vecteurB;

    printf("Entrer 1 pour une addition vectorielle.\n");
    printf("Entrer 2 pour une soustraction vectorielle.\n");

    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        printf("addition vectorielle\n");
        setVecteurA(&vecteurA);
        setVecteurB(&vecteurB);
        additionVec(vecteurA,vecteurB);
        break;

    case 2:
        printf("soustraction vectorielle\n");
        setVecteurA(&vecteurA);
        setVecteurB(&vecteurB);
        soustractionVec (vecteurA, vecteurB);
        break;

    default:
        printf("XXXXXXXX");
    }


    return 0;
}
