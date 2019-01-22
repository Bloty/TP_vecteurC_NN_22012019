#include "vecteur2.h"
#include <stdio.h>
#include <stdlib.h>

void setVecteurA(tVecteur2 *vecteurA)
{
    int val=0;

    printf("Entrer X du vecteur A");
    scanf("%d",&val);

    vecteurA->nX=val;

    printf("Entrer Y du vecteur A");
    scanf("%d",&val);

    vecteurA->nY=val;
}

void setVecteurB(tVecteur2 *vecteurB)
{
    int val=0;

    printf("Entrer X du vecteur B");
    scanf("%d",&val);

    vecteurB->nX=val;

    printf("Entrer Y du vecteur B");
    scanf("%d",&val);

    vecteurB->nY=val;
}
