#include "vecteur2.h"
#include "calculeVec.h"
#include <stdio.h>
#include <stdlib.h>


void additionVec (tVecteur2 vecteurA, tVecteur2 vecteurB)
{
    int nXadd=0;
    int nYadd=0;

    nXadd=vecteurA.nX+vecteurB.nX;
    nYadd=vecteurA.nY+vecteurB.nY;
    printf("Les coodonnees du vecteur additionner son %d pour X et %d pour Y\n",nXadd,nYadd);
}

void soustractionVec (tVecteur2 vecteurA, tVecteur2 vecteurB)
{
    int nXadd=0;
    int nYadd=0;

    nXadd=vecteurA.nX+vecteurB.nY;
    nYadd=vecteurA.nY+vecteurB.nX;
    printf("Les coodonnees du vecteur soustrait son %d pour X et %d pour Y\n",nXadd,nYadd);
}
